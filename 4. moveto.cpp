#include<graphics.h>
#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	circle(200,200,100);
	moveto(300, 300);
	getch();
	closegraph();

}
