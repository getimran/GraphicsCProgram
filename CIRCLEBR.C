#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int xc,yc,r,d,x,y;
	int gd= DETECT,gm;
	initgraph(&gd,&gm,"C://TC/BGI");

	printf("Enter center of the circle: ");
	scanf("%d %d",&xc,&yc);
	printf("Enter radius of the circle: ");
	scanf("%d", &r);

	d=3-2*r;
	x=0;y=r;

	while(x<y)
	{
		putpixel(xc+x,yc-y,RED);
		putpixel(xc-x,yc-y,RED);
		putpixel(xc+x,yc+y,RED);
		putpixel(xc-x,yc+y,RED);
		putpixel(xc+y,yc-x,RED);
		putpixel(xc-y,yc-x,RED);
		putpixel(xc+y,yc+x,RED);
		putpixel(xc-y,yc+x,RED);

		if(d<=0){
			d=d+4*x+6;
		}else{
			d=d+4*x-4*y+10;
			y=y-1;
		}
		x=x+1;
	}
	getch();
	closegraph();


}