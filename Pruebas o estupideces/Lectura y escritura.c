#include<stdio.h>
#include<conio.h>

void main (void)
{

	FILE *pf;
	char Nombre;
	int Edad,i;
	float Estatura;

	clrscr();

	

	pf=fopen("C:\\FileC\\archivo2.txt","w");

	fflush(stdin);

	if(pf==NULL)printf("Error");
	else
	{
		for(i=0;i<2;i++)
		{
		scanf("%s %d %f",Nombre,&Edad,&Estatura);
		
		fprintf(pf,"%s %d %.2f",Nombre,Edad,Estatura);
		}
		fclose(pf);
	}
	getch();

}