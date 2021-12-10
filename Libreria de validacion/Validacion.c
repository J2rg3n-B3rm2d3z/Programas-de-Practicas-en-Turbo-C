#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
#include<math.h>

int intVa(int Maxcifras,char*MensajeError);

void main(void)
{
	int a,b,c;
	clrscr();
	
	a=intVa(2,"Error de lectura");
	
	printf("\n%d",a);
	
	getch();
	
	
	
	
	
	
}



int intVa(int Maxcifras,char*MensajeError)
{
	char *LecturaNumero;
	int i,Validador,NumeroRetorno;
	
	LecturaNumero=calloc(100,sizeof(char));
	
	gets(LecturaNumero);
	Validador=0;
	i=0;
	/*
		while(strlen(LecturaNumero)>Maxcifras)
		{
			clrscr();
			fflush( stdin );
			printf("Error de lectura, intentelo de nuevo:\n");
			gets(LecturaNumero);
			
		}
	*/
		if(strlen(LecturaNumero)>Maxcifras)Validador++;
		else
		{
			for	(i=0;i<strlen(LecturaNumero);i++)
			{
				
				if((isdigit(LecturaNumero[i])==0)||(LecturaNumero[i]==NULL))
				{
								
					Validador++;
													
				}	
				
			}
		}
	fflush( stdin );
	
	while(Validador!=0)
	{
		Validador=0;
		clrscr();
		printf("%s\n",MensajeError);
		gets(LecturaNumero);
		if(strlen(LecturaNumero)>Maxcifras)Validador++;
		else
		{
			for	(i=0;i<strlen(LecturaNumero);i++)
			{
				if((isdigit(LecturaNumero[i])==0)||(LecturaNumero[i]==NULL))
				{
								
					Validador++;

				}
								
			}
		}
		fflush(stdin);
	}
	
	NumeroRetorno=atoi(LecturaNumero);
	
	free(LecturaNumero);
	
	return(NumeroRetorno);
	
}