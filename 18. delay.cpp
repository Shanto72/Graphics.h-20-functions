#include<graphics.h>
#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	delay(1500);
	circle(250, 300, 150);
	getch();
	closegraph();

}
