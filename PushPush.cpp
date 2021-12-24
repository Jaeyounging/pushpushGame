#include <iostream>
#include"Consola.h"
#include<conio.h>
#include<windows.h>
#include "Util.h"
#include "KeyCode.h"
#include "Map.h"
#include "Start.h"
#include "Finish.h"
#define MAXSTAGE 7

using namespace std;


int main()
{

    int mapData[MAXSTAGE][15][15] = {

    {
    {1,1,1,1,1,1,1,1,1,1,1,1},
    {1,1,1,4,1,1,0,0,0,0,0,1},
    {1,0,0,0,0,1,0,0,0,0,0,1},
    {1,0,0,2,0,1,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,1},
    {1,1,1,1,1,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,1},
    {1,1,1,1,1,1,1,1,1,1,1,1}
    }
    ,

    {
    {1,1,1,1,1,1,1,1,1,1,1,1},
    {1,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,1,1,0,2,0,0,1},
    {1,0,0,0,0,1,1,0,0,0,0,1},
    {1,0,0,0,2,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,1,0,0,1},
    {1,0,0,0,0,0,0,0,1,4,4,1},
    {1,1,1,1,1,1,1,1,1,1,1,1}
    }
    ,

    {
    {0,0,0,0,0,0,0,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1,1,4,4,1,1,1},
    {1,0,0,0,0,0,0,1,1,0,2,0,1,1},
    {1,0,0,0,0,0,2,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,1,0,0,1},
    {1,0,0,0,0,0,0,0,1,1,1,1,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1}
    },
    {
    {0, 0, 0, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 0, 4, 4, 1},
    {1, 0, 0, 0 ,1, 0, 0, 1},
    {1, 0, 2, 0, 0, 0, 0, 1},
    {1, 0, 0, 1, 1, 0, 0, 1},
    {1, 0, 0, 0, 0, 1, 2, 1},
    {0, 1, 1, 1, 0, 0, 0, 1},
    {0, 0, 0, 1, 1, 1, 1, 1}
    },
    {
    {0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0 },
    {0, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 0 },
    {0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    {0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    {1, 1, 0, 2, 0, 0, 0, 0, 0, 0, 1, 1, 0 },
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
    {1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 1 },
    {1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1 },
    {0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0 },
    {0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0 ,0 },
    {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 },
    {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 },
    {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 },
    {0, 0, 1, 0, 0, 4, 1, 4, 0, 0, 1, 0, 0 },
    {0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 }
 },
    {
    {0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0},
    {0, 1, 4, 0, 1, 0, 0, 1, 1, 1, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 4, 1, 1, 1},
    {0, 1, 0, 0, 0, 2, 0, 1, 0, 0, 0, 1},
    {0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1},
    {0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1},
    {0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0},
    {1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0},
    {1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 1},
    {1, 4, 2, 0, 0, 1, 1, 0, 0, 0, 1, 0},
    {1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1}
    }
    ,{

    }
    };

    //system("mode con: cols=70 lines=26 ");


    while (1) {

        _setcursortype(_NOCURSOR);

        Start::titleDraw();
        int menuNum = Start::menuDraw();

        if (menuNum == 0) {

            clrscr();

            int posx = 6, posy = 6;
            int oldx, oldy;
            int nposx, nposy;
            int stage = 0;

            Map::drawMap(mapData, stage);
            Map::drawinfo(stage);
            Map::drawCharacter(posx, posy);


            while (1) {
                int key = Key::getkey();
                if (key == 'p' || key == 'P') {
                    posx = 6; posy = 6;
                    stage--;
                    if (stage < 0) stage = 0;
                    Map::drawMap(mapData, stage);
                    Map::drawinfo(stage);
                    Map::drawCharacter(posx, posy);
                }
                if (key == 'n' || key == 'N') {
                    posx = 6; posy = 6;
                    stage++;
                    if (stage == 6) {
                        clrscr();
                        Finish::endInfo(stage);
                        int key = Key::getkey();
                    }
                    if (stage > 11) stage = 5;
                    Map::drawMap(mapData, stage);
                    Map::drawinfo(stage);
                    Map::drawCharacter(posx, posy);

                }

                if (key == 'r' || key == 'R') {

                    posx = 6; posy = 6;
                    Map::reset(mapData, posx, posy, stage);
                }

                if (key == 27)
                    break;


                oldx = nposx = posx;
                oldy = nposy = posy;
                switch (key) {
                case M_LEFTKEY: if (posx > 0) nposx--; break;
                case M_UPKEY: if (posy > 0) nposy--; break;
                case M_DOWNKEY: if (posy < MAP_HEIGHT - 1) nposy++; break;
                case M_RIGHTKEY: if (posx < MAP_WIDTH - 1) nposx++; break;
                }


                switch (mapData[stage][nposy][nposx]) {
                case 0: posx = nposx;
                    posy = nposy; break;

                case 1: break;

                case 2: switch (key) {


                case M_LEFTKEY:
                    if (mapData[stage][nposy][nposx - 1] == 0 || mapData[stage][nposy][nposx - 1] == 4)
                    {

                        mapData[stage][nposy][nposx - 1] = 2;
                        mapData[stage][nposy][nposx] = 0;

                    }
                    break;

                case M_UPKEY:
                    if (mapData[stage][nposy - 1][nposx] == 0 || mapData[stage][nposy - 1][nposx] == 4)
                    {

                        mapData[stage][nposy - 1][nposx] = 2;
                        mapData[stage][nposy][nposx] = 0;

                    }

                    break;

                case M_DOWNKEY:
                    if (mapData[stage][nposy + 1][nposx] == 0 || mapData[stage][nposy + 1][nposx] == 4)
                    {
                        mapData[stage][nposy + 1][nposx] = 2;
                        mapData[stage][nposy][nposx] = 0;

                    }
                    break;
                case M_RIGHTKEY:
                    if (mapData[stage][nposy][nposx + 1] == 0 || mapData[stage][nposy][nposx + 1] == 4)
                    {
                        mapData[stage][nposy][nposx + 1] = 2;
                        mapData[stage][nposy][nposx] = 0;

                    }
                    break;

                }
                      break;

                }

                if (oldx != posx || oldy != posy) {

                    if (stage == 0) {
                        if (mapData[stage][1][3] == 2) //1단계
                        {
                            stage = Map::reDraw(mapData, stage, posx, posy);
                            posx = 6; posy = 6;

                        }
                    }
                    if (stage == 1) {
                        if (mapData[stage][8][9] == 2 && mapData[stage][8][10] == 2)//2단계
                        {
                            stage = Map::reDraw(mapData, stage, posx, posy);
                            posx = 6; posy = 6;
                        }
                    }

                    if (stage == 2) {
                        if (mapData[stage][1][9] == 2 && mapData[stage][1][10] == 2)//3단계
                        {
                            stage = Map::reDraw(mapData, stage, posx, posy);
                            posx = 6; posy = 6;
                        }
                    }

                    if (stage == 3) {
                        if (mapData[stage][1][5] == 2 && mapData[stage][1][6] == 2)//4단계
                        {
                            stage = Map::reDraw(mapData, stage, posx, posy);
                            posx = 6; posy = 6;
                        }
                    }

                    if (stage == 4) {

                        if (mapData[stage][13][5] == 2 && mapData[stage][13][7] == 2)//5단계
                        {
                            stage = Map::reDraw(mapData, stage, posx, posy);
                            posx = 6; posy = 6;
                        }
                    }

                    if (stage == 5) {
                        if (mapData[stage][1][2] == 2 && mapData[stage][2][8] == 2 && mapData[stage][9][1] == 2)//6단계

                        {
                            stage = Map::reDraw(mapData, stage, posx, posy);

                            posx = 6; posy = 6;


                        }
                    }

                    Map::drawMap(mapData, stage);
                    Map::drawinfo(stage);
                    Map::drawCharacter(posx, posy);
                }


                if (stage == 6) {
                    clrscr();
                    Finish::endInfo(stage);
                    int key = Key::getkey();
                    break;
                }
            }



        }
        else if (menuNum == 1) {
            Start::infoDraw();
        }
        else if (menuNum == 2) {

            break;

        }

        //system("pause>null");
        clrscr();
    }

}