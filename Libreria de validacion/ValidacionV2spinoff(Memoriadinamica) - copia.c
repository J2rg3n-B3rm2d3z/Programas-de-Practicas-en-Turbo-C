#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
#include<math.h>

void main(void)
{
	int *arregloCalloc;
	int Tamano;
	clrscr();
	printf("Ingrese el tama¤o del arrglo:\n");
	scanf("%i",&Tamano);
	arregloCalloc=calloc(Tamano,sizeof(char));
	
	fflush(stdin);
	
	if(arregloCalloc==NULL)printf("No se pudo xd\n");
	else
	{

	printf("Escriba una frase:\n");
	gets(arregloCalloc);


	printf("%s",arregloCalloc);
	}

	getch();
	free(arregloCalloc);

}
