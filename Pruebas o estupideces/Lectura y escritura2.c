#include<stdio.h>
#include<conio.h>

void main (void)
{

	FILE *pf;
	char Nombre[10];
	int Edad;
	float Estatura;

	clrscr();


	fflush(stdin);

	pf=fopen("C:\\FileC\\archivo2.txt","r");

	if(pf==NULL)printf("Error");
	else
	{
		
		fscanf(pf,"%s %d %f",Nombre, &Edad, &Estatura);


		fclose(pf);

		printf("%s\n%d\n%.2f",Nombre,Edad,Estatura);
	}
	getch();

}