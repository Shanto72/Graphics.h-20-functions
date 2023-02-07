#include<graphics.h>
#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	fillellipse(250, 300, 100, 150);
	getch();
	closegraph();

}
