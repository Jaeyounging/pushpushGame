#pragma once
#include<iostream>
#include<conio.h>
using namespace std;
#include"Consola.h"
#include "Util.h"
#include "KeyCode.h"

#define MAP_X1 7
#define MAP_Y1 5
#define MAP_WIDTH 15
#define MAP_HEIGHT 15
#define MAXSTAGE 6

class Map
{

public:
    static void drawCharacter(int x, int y)
    {

        textcolor(RED);
        textbackground(BLACK);
        Util::xyputstr((MAP_X1 + 1 + x) * 2, MAP_Y1 + 1 + y, "♥");
    }

    static void drawMap(const int mapData[][15][15], int stage) {

        const char* cellSymbol[] = { "  ", "▣", "◎", NULL, "●", NULL, "Ｘ"};

        int i = 0;

        for (i = stage; i < 1 + stage; ++i)
            for (int row = 0; row < MAP_HEIGHT; ++row)
                for (int col = 0; col < MAP_WIDTH; ++col) {
                    int cell = mapData[stage][row][col];
                    if (mapData[stage][row][col] == 1)
                        textcolor(BLACK);
                    else if (mapData[stage][row][col] == 4)
                        textcolor(YELLOW);
                    else if (mapData[stage][row][col] == 7)
                        textcolor(RED);
                    else
                        textcolor(LIGHTGREEN);
                    textbackground((cell == 1) ? WHITE : BLACK);
                    gotoxy((MAP_X1 + col + 1) * 2, MAP_Y1 + row + 1);
                    puts(cellSymbol[cell]);
                }
    }

    static void drawinfo(int stage)
    {
        textcolor(WHITE);
        textbackground(BLACK);
        gotoxy(53, 5); cout << stage + 1 << " 단계";
        gotoxy(53, 6); cout << "P : 이전 단계";
        gotoxy(53, 7); cout << "N : 다음 단계";
        gotoxy(53, 8); cout << "R : 다시 하기 ";
        gotoxy(53, 9); cout << "방향키 : 이동 ";
        gotoxy(53, 10); cout << "ESC : 게임 종료";
        gotoxy(53, 12);
        cout << ("       UP");
        gotoxy(53, 13);
        cout << ("       ↑");
        gotoxy(53, 14);
        cout << ("LEFT ←  → RIGHT");
        gotoxy(53, 15);
        cout << ("       ↓");
        gotoxy(53, 16);
        cout << ("      DOWN");
    }

    static void score(int stage)
    {
        textcolor(WHITE);
        textbackground(BLACK);
        gotoxy(53, 5); cout << stage + 1 << " 단계";
        gotoxy(53, 6); cout << "P : 이전 단계";
        gotoxy(53, 7); cout << "N : 다음 단계";
        gotoxy(53, 8); cout << "R : 다시 하기 ";
        gotoxy(53, 9); cout << "방향키 : 이동 ";
        gotoxy(53, 10); cout << "ESC : 게임 종료";
        gotoxy(53, 12);
        cout << ("       UP");
        gotoxy(53, 13);
        cout << ("       ↑");
        gotoxy(53, 14);
        cout << ("LEFT ←  → RIGHT");
        gotoxy(53, 15);
        cout << ("       ↓");
        gotoxy(53, 16);
        cout << ("      DOWN");

        textcolor(YELLOW);
        textbackground(BLACK);
        gotoxy(58, 18); cout << "성공!";
        gotoxy(54, 20); cout << "점수 : 100 점 ";
    }


    //다음판으로 넘길때 맵 다시그리는 함수
    static int reDraw(const int mapData[][15][15], int stage, int posx, int posy)
    {
        Map::drawMap(mapData, stage);
        Map::score(stage);
        Map::drawCharacter(posx, posy);
        int k = Key::getkey();

        stage++;

        clrscr();
        Map::drawMap(mapData, stage);
        Map::drawinfo(stage);
        Map::drawCharacter(posx, posy);

        return stage;
    }

    static void reset(int mapData[][15][15], int posx, int posy, int stage)
    {
        posx = 6; posy = 6;
        int i;
        for (i = stage; i < 1 + stage; ++i)
            for (int row = 0; row < MAP_HEIGHT; ++row)
                for (int col = 0; col < MAP_WIDTH; ++col) {
                    if (mapData[stage][row][col] == 2)
                        mapData[stage][row][col] = 0;
                    if (mapData[stage][row][col] == 4)
                        mapData[stage][row][col] = 0;
                }

        if (stage == 0)
        {
            mapData[stage][1][3] = 4;
            mapData[stage][3][3] = 2;

        }

        if (stage == 1)
        {
            mapData[stage][6][5] = 2;
            mapData[stage][4][8] = 2;
            mapData[stage][8][9] = 4;
            mapData[stage][8][10] = 4;
        }

        if (stage == 2)
        {
            mapData[stage][2][10] = 2;
            mapData[stage][3][6] = 2;
            mapData[stage][1][9] = 4;
            mapData[stage][1][10] = 4;
        }

        if (stage == 3)
        {
            mapData[stage][5][6] = 2;
            mapData[stage][3][2] = 2;
            mapData[stage][1][5] = 4;
            mapData[stage][1][6] = 4;

        }

        if (stage == 4)
        {
            mapData[stage][4][3] = 2;
            mapData[stage][6][8] = 2;
            mapData[stage][13][5] = 4;
            mapData[stage][13][7] = 4;

        }

        if (stage == 5)
        {
            mapData[stage][3][5] = 2;
            mapData[stage][8][5] = 2;
            mapData[stage][9][2] = 2;
            mapData[stage][1][2] = 4;
            mapData[stage][2][8] = 4;
            mapData[stage][9][1] = 4;
        }

        Map::drawMap(mapData, stage);
        Map::drawinfo(stage);
        Map::drawCharacter(posx, posy);
    }
};
