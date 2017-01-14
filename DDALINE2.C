#include<stdio.h>
#include<dos.h>
#include<graphics.h>
#include<conio.h>
void main()
{
int x1,y1,xn,yn,dx,dy,pixel,i;
int gd= DETECT,gm;
initgraph(&gd,&gm,"C://TC/BGI");
printf("----DDA LINE GENERATION ALGORITHM------\n");
printf("Enter starting co-ordinates: \n");
scanf("%d %d",&x1,&y1);
printf("Enter ending co-ordinates: \n");
scanf("%d %d",&xn,&yn);
dx= xn-x1;
dy= yn-y1;

if(dx>=dy)
pixel= dx;
else
pixel= dy;

dx= dx/pixel;
dy= dy/pixel;

i=1;
while(i<=pixel){
	putpixel(x1,y1,WHITE);
	x1=x1+dx;
	y1=y1+dy;
	i++;
	delay(100);
	}
getch();
closegraph();
}