#pragma once

#include<iostream>
#include<conio.h>
using namespace std;
#include"Consola.h"

class Util
{
public:
	static void xyput(int x, int y, char ch)
	{
		gotoxy(x, y);
		cout << ch;
	}
	
	static void xyputstr(int x, int y, const char str[])
	{
		gotoxy(x, y);
		cout << str;
	}

	static void fillbox(int x1, int y1, int x2, int y2, char color)
	{
		textbackground(color);
		for (int y = y1; y <= y2; ++y)
			for (int x = x1; x <= x2; ++x)
				xyput(x, y, ' ');
	}
};

