#include<graphics.h>
#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	setlinestyle(4,5,20);
	line(250,250,400,400);
	getch();
	closegraph();

}
