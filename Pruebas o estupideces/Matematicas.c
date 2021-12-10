#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<graphics.h>
#include<math.h>
#include<mouse.h>

void inttriangule(int x, int y, int x1, int y1, int x2, int y2);
void floattriangule(float x, float y, float x1, float y1, float x2, float y2);
void main(void)
{
	int g_driver,g_mode,i,j;
	int xy[3][2];
	int rot[3][2];
	float Mrot[2][2];
	int Angulo=180;
	
	Mrot[0][0]=ceil(cos(Angulo));
	Mrot[0][1]=ceil(-sin(Angulo));
	
	Mrot[1][0]=ceil(sin(Angulo));
	Mrot[1][1]=ceil(cos(Angulo));
	
	for (i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%f\n",Mrot[i][j]);	
		}
	}
	getch();
	xy[0][0]=120;
	xy[0][1]=160;
	
	xy[1][0]=160;
	xy[1][1]=200;
	
	xy[2][0]=200;
	xy[2][1]=160;
	
	rot[0][0]=(((xy[0][0])*(Mrot[0][0]))+((xy[0][1])*(Mrot[1][0])));
	rot[0][1]=(((xy[0][0])*(Mrot[0][1]))+((xy[0][1])*(Mrot[1][1])));
	
	rot[1][0]=(((xy[1][0])*(Mrot[0][0]))+((xy[1][1])*(Mrot[1][0])));
	rot[1][1]=(((xy[1][0])*(Mrot[0][1]))+((xy[1][1])*(Mrot[1][1])));
	
	rot[2][0]=(((xy[2][0])*(Mrot[0][0]))+((xy[2][1])*(Mrot[1][0])));
	rot[2][1]=(((xy[2][0])*(Mrot[0][1]))+((xy[2][1])*(Mrot[1][1])));
	
	for (i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\n",rot[i][j]);	
		}
	}
	getch();
	g_driver=DETECT;
	g_mode=DETECT;
	initgraph(&g_driver,&g_mode,"...\\bgi");
	
	/*
	line(xy[0][0],xy[0][1],xy[1][0],xy[1][1]);
	line(xy[1][0],xy[1][1],xy[2][0],xy[2][1]);
	line(xy[2][0],xy[2][1],xy[0][0],xy[0][1]);
	*/
	
	
	inttriangule(xy[0][0], xy[0][1],xy[1][0], xy[1][1], xy[2][0], xy[2][1]);
	
	
	inttriangule(xy[0][0]+160, xy[0][1],xy[1][0]+160, xy[1][1], xy[2][0]+160, xy[2][1]);
	
	
	inttriangule(rot[0][0], rot[0][1],rot[1][0], rot[1][1], rot[2][0],rot[2][1]);
	
	getch();
	
}

void inttriangule(int x, int y, int x1, int y1, int x2, int y2)
{
	line(x,y,x1,y1);
	line(x1,y1,x2,y2);
	line(x2,y2,x,y);	
	return;
}
void floattriangule(float x, float y, float x1, float y1, float x2, float y2)
{
	line(x,y,x1,y1);
	line(x1,y1,x2,y2);
	line(x2,y2,x,y);	
	return;
}