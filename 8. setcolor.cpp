#include<graphics.h>
#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	setcolor(5);
	settextstyle(8, 0, 5);
	outtextxy(250,250, "test");
	getch();
	closegraph();

}
