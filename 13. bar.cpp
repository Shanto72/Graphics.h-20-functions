#include<graphics.h>
#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	bar(120, 130, 250, 260);
	getch();
	closegraph();

}
