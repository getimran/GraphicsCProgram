#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
int gd= DETECT,gm;
initgraph(&gd,&gm,"C://TC/BGI");
rectangle(100,100,200,200);
rectangle(125,125,175,200);
line(100,100,150,50);
line(150,50,200,100);
circle(150,80,19);
getch();
closegraph();
}