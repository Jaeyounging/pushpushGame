#pragma once
#include <iostream>
#include "Consola.h"
using namespace std;

class Finish {
public:
	static void endInfo(int stage) {
        
        while (1) {
            textcolor(YELLOW);
            gotoxy(25, 11);
            cout << "    ��";
            textcolor(RED); gotoxy(36, 11); cout << "���� ��  �� ����    ���� ��  �� ���";
            textcolor(YELLOW); gotoxy(82, 11); cout << "    ��";
            textcolor(GREEN);
            gotoxy(25, 12);
            textcolor(GREEN);
            cout << "    ��";
            textcolor(RED); gotoxy(36, 12); cout << "  ��   ��  �� ��        ��     ��  �� �� ��";
            textcolor(GREEN); gotoxy(82, 12); cout << "    ��";
            gotoxy(25, 13);
            textcolor(GREEN);
            cout << "  ����";
            textcolor(RED); gotoxy(36, 13); cout << "  ��   ���� ����    ���� ���� ��   ��";
            textcolor(GREEN); gotoxy(82, 13); cout << "  ����";
            gotoxy(25, 14);
            textcolor(GREEN);
            cout << "������";
            textcolor(RED); gotoxy(36, 14); cout << "  ��   ��  �� ��        ��     ��  �� ��  ��";
            textcolor(GREEN); gotoxy(82, 14); cout << "������";
            gotoxy(25, 15);
            textcolor(BROWN);
            cout << "    ��";
            textcolor(RED); gotoxy(36, 15); cout << "  ��   ��  �� ����    ���� ��  �� ���";
            textcolor(BROWN); gotoxy(82, 15); cout << "    ��";
        }
	}
};