#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
#include<math.h>

void main(void)
{
	double num;
	char nom[20]="999999999999999.999";
	clrscr();
	num = atof(nom);
	printf("%s\n",nom);
	printf("%f",num);
	getch();
	
	
	

}
