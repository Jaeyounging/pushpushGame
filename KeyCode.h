#pragma once
#include<iostream>
#include<conio.h>
using namespace std;
#include"Consola.h"

#define M_UPKEY 0xe048
#define M_LEFTKEY 0xe04b
#define M_RIGHTKEY 0xe04d
#define M_DOWNKEY 0xe050
#define SPACE 0x20

class Key {
public:
	static int getkey() {
		int key = _getch();
		return ((key == 0xe0) ? (0xe000 | _getch()) : key);
	}
};



