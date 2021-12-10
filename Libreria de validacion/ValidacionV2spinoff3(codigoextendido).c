#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
#include<math.h>

char obte1();
char obte2();

void main(void)
{
	int a,n;
	clrscr();
	
	a=obte2();
	
	while(a!='K')
	{	
		printf("%c %d\n",a,a);
		a=obte2();
	}
	

}

char obte1()
{
	char a, b;
	
	a=getch();
	
	if(a==0)
	{
		b=getch();
	}
	
	return a;
	
}

char obte2()
{
	char a, b;
	
	a=getch();
	
	if(a==0)
	{
		b=getch();
		return b;
	}
	else return 0;
	
}


