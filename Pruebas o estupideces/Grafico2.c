#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<graphics.h>
#include<math.h>
#include<mouse.h>
/*int Colision(int x,int y,int x2,int y2, int xe1, int ye1, int xe2, int ye2);*/

void main(void)
{
	char b,c;
	int a,g_driver,g_mode, x, y,bol;
	long int count;
	a=0;
	count=0;
	g_driver=DETECT;
	g_mode=DETECT;
	initgraph(&g_driver,&g_mode,"...\\bgi");
	mver();
	b=0;
	x=640/2;
	y=480;
	bol=0;
	setcolor(15);
	while (a!=1)
	{
		/*cleardevice();*/
		setcolor(15);
		rectangle(60,60,70,70);
		
		/*b=getche();*/
		
		
		if((b==27) || ((mclick()==1) && ((mxpos(1)>60)&&(mxpos(1)<70)) && ((mypos(1)>60)&&(mypos(1)<70))))
			a=1;
		
		if ((mclick()==1) && (count>=500))
		{
			x=mxpos(1);
			y=mypos(1);
			count=0;
			bol=1;
		
		}
		else if (mclick()==2)
			a=1;
		
		if (count<500)
			count++;
		
		/*rectangle(x,y,x+10,y+10);*/
		
		
		/*putpixel(x,y,15);*/
		if(bol==1)
		{
		line(640/2,480,x,y);
		delay(30);
		cleardevice();
		bol=0;
		}
		
		
		if (b==8)
			a=1;
		
		
		while(kbhit())
		{
			b=getch();
		}
		
		
		/*
		switch (count)
		{
		case 1:
		rectangle(mxpos(1),mypos(1),mxpos(1)+10,mypos(1)+10);
		break;
		case 2:
		rectangle(mxpos(1),mypos(1),mxpos(1)+10,mypos(1)+10);
		break;
		case 3:
		rectangle(mxpos(1),mypos(1),mxpos(1)+10,mypos(1)+10);
		break;
		default:
		break;
		}*/
		
		
	}
}
/*
int Colision(int x,int y,int x2,int y2, int xe1, int ye1, int xe2, int ye2)
{
	if((x>=xe1 && x<=xe2 && y>=ye1 && y<=ye2)||(x2>=xe1 && x2<=xe2 && y2>=ye1 && y2<=ye2)||(x2-10>=xe1 && x2-10<=xe2 && y2>=ye1 && y2<=ye2)||(x2-10>=xe1 && x2-10<=xe2 && y2-10>=ye1 && y2-10<=ye2))
	{
		return 1;
	}
}
*/