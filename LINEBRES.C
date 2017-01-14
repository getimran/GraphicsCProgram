#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
	int x1,y1,xn,yn,dx,dy,p;
	int gDriver= DETECT,gMode;
	initgraph(&gDriver,&gMode,"C://TC/BGI");

	printf("Enter starting point: ");
	scanf("%d %d",&x1,&y1);
	printf("Enter ending point: ");
	scanf("%d %d",&xn,&yn);

	dx= xn-x1;
	dy= yn-y1;

	p= 2*dy-dx;
	while(x1<xn)
	{
		if(p>=0){
			putpixel(x1,y1,YELLOW);
			y1=y1+1;
			p=p+2*dy-2*dx;
		}else{
			putpixel(x1,y1,RED);
			p=p+2*dy;
		}
		x1=x1+1;
		delay(100);       f
	}
	getch();
	closegraph();
}