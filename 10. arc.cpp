#include<graphics.h>
#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	arc(250,400 , 40, 180, 150);
	getch();
	closegraph();

}
