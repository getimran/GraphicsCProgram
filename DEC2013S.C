#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
int gd= DETECT,gm;
initgraph(&gd,&gm,"C://TC/BGI");
setcolor(YELLOW);
outtextxy(240,50,"Diagram using C");
setcolor(RED);
int i,x=240,y=240,a=250,b=230;
for(i=0;i<4;i++){
line(x,y,a,b);
x=x+20;
line(a,b,x,y);
a=a+20;
}
getch();
closegraph();
}