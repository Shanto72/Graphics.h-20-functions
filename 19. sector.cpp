#include<graphics.h>
#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	sector(250, 300, 40, 120, 120, 200);
	getch();
	closegraph();

}
