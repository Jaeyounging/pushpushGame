#pragma once
#include<iostream>
#include<conio.h>
using namespace std;
#include"Consola.h"
#include "KeyCode.h"
#include "Util.h"

class Start
{
public:
	static void titleDraw() {

		textcolor(RED);
		gotoxy(32, 4);
		cout << "■■■ ■  ■ ■■■ ■  ■   ■■■ ■  ■ ■■■ ■  ■";
		gotoxy(32, 5);
		cout << "■  ■ ■  ■ ■     ■  ■   ■  ■ ■  ■ ■     ■  ■";
		gotoxy(32, 6);
		cout << "■■■ ■  ■ ■■■ ■■■   ■■■ ■  ■ ■■■ ■■■";
		gotoxy(32, 7);
		cout << "■     ■  ■     ■ ■  ■   ■     ■  ■     ■ ■  ■";
		gotoxy(32, 8);
		cout << "■     ■■■ ■■■ ■  ■   ■     ■■■ ■■■ ■  ■";

		textcolor(GREEN);
		gotoxy(47, 11);
		cout << "■■■ ■■■ ■  ■ ■■■";
		gotoxy(47, 12);
		cout << "■     ■  ■ ■▼■ ■";
		gotoxy(47, 13);
		cout << "■  ■ ■■■ ■  ■ ■■■";
		gotoxy(47, 14);
		cout << "■  ■ ■  ■ ■  ■ ■";
		gotoxy(47, 15);
		cout << "■■■ ■  ■ ■  ■ ■■■";

	}

	static int menuDraw() {

		textbackground(BLACK);
		textcolor(WHITE);
		gotoxy(53, 20);
		cout << "▶ 게 임 시 작 ";
		gotoxy(55, 21);
		cout << " 게 임 정 보";
		gotoxy(55, 22);
		cout << " 게 임 종 료";

		int x = 55, y = 20;

		while (1) {

			int key = Key::getkey();
			if (key == 'q') break;

			switch (key) {

			case M_UPKEY: {

				if (y > 20) {
					gotoxy(x - 2, y);
					cout << "  ";
					gotoxy(x - 2, --y);
					cout << "▶";
				}

			}break;

			case M_DOWNKEY: {

				if (y < 22) {
					gotoxy(x - 2, y);
					cout << "  ";
					gotoxy(x - 2, ++y);
					cout << "▶";
				}

			}break;
			case SPACE: {
				return y - 20;
			}
			}
		}

		return 0;

	}

	static void infoDraw()
	{
		clrscr();
		cout << "\n\n";
		cout << "  [ 게 임 설 명 ]" << endl << endl;
		cout << "* ♥ 캐릭터 이동은 키보드의 ↑↓←→ 키로 움직인다." << endl;
		cout << "* ♥ 캐릭터를 움직여 주어진 짐을 도착지까지 옮기면 성공입니다." << endl;
		cout << "* 짐을 도착지까지 넣으면 +100점!" << endl << endl << endl;
		cout << "  스페이스바를 누르면 메인화면으로 이동합니다.";

		while (1) {
			if (Key::getkey() == SPACE) {
				break;
			}
		}

	}
};

