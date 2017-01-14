#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C://TC/BGI");
ellipse(240,240,0,360,50,70);
line(240,170,450,170);
line(450,170,450,310);
line(450,310,240,310);
getch();
closegraph();
}