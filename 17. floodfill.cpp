#include<graphics.h>
#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	circle(250,400, 100);
	floodfill(250, 400, 50);
	getch();
	closegraph();

}
