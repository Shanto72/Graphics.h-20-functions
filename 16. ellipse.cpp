#include<graphics.h>
#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	ellipse(250,250, 55, 120, 100, 150);
	getch();
	closegraph();

}
