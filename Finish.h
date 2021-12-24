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
            cout << "    б┌";
            textcolor(RED); gotoxy(36, 11); cout << "бсбсбс бс  бс бсбсбс    бсбсбс бс  бс бсбс";
            textcolor(YELLOW); gotoxy(82, 11); cout << "    б┌";
            textcolor(GREEN);
            gotoxy(25, 12);
            textcolor(GREEN);
            cout << "    бс";
            textcolor(RED); gotoxy(36, 12); cout << "  бс   бс  бс бс        бс     бс  бс бс бс";
            textcolor(GREEN); gotoxy(82, 12); cout << "    бс";
            gotoxy(25, 13);
            textcolor(GREEN);
            cout << "  бсбсбс";
            textcolor(RED); gotoxy(36, 13); cout << "  бс   бсбсбс бсбсбс    бсбсбс бсбхбс бс   бс";
            textcolor(GREEN); gotoxy(82, 13); cout << "  бсбсбс";
            gotoxy(25, 14);
            textcolor(GREEN);
            cout << "бсбсбсбсбс";
            textcolor(RED); gotoxy(36, 14); cout << "  бс   бс  бс бс        бс     бс  бс бс  бс";
            textcolor(GREEN); gotoxy(82, 14); cout << "бсбсбсбсбс";
            gotoxy(25, 15);
            textcolor(BROWN);
            cout << "    бс";
            textcolor(RED); gotoxy(36, 15); cout << "  бс   бс  бс бсбсбс    бсбсбс бс  бс бсбс";
            textcolor(BROWN); gotoxy(82, 15); cout << "    бс";
        }
	}
};