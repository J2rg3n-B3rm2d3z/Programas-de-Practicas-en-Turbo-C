#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
#include<math.h>
#include"validacion.h"
#define MAX 10


void main(void)
{
	int a;
	long int b;
	unsigned int c;
	unsigned long int d;
	double e;
	char Nombre[MAX]; /*Se tiene que especificar su dimension*/
	char Nombre2[MAX+10];
	char Nombre3[MAX];
	char Nombre4[MAX];
	clrscr();
	printf("Escriba un numero entero:\n");
	a=intValidacion();
	printf("Escriba un numero largo entero:\n");
	b=lintValidacion();
	printf("Escriba un numero entero sin signo:\n");
	c=unintValidacion();
	printf("Escriba un numero largo entero sin signo:\n");
	d=unlintValidacion();
	printf("Escriba un numero decimal:\n");
	e=doubleValidacion();
	printf("Escriba su nombre:\n");
	SoloCarValidacion(Nombre,0,MAX); /*Pide primer parametro la cadena, el numero 0 si se muestra, y la dimension o longitud de la cadena*/
	printf("Escriba su nombre con espacio:\n");
	CarEspacioValidacion(Nombre2,0,MAX+10);
	printf("Escriba su contrasena con numeros y letras:\n");
	CarNumValidacion(Nombre3,1,MAX);						/*No se mostrara en pantalla ya que su segundo parametro no es 0*/
	printf("Escriba su contrasena con signo:\n");
	CarNumSigValidacion(Nombre4,0,MAX);
	printf("Su numero entero es: %d\n",a);
	printf("Su numero entero largo es: %ld\n",b);
	printf("Su numero entero sin signo es: %u\n",c);
	printf("Su numero entero largo sin signo es: %lu\n",d);
	printf("Su numero decimal es: %f\n",e);
	printf("Su nombre es: %s\n",Nombre);
	printf("Su nombre con espacio es: %s\n",Nombre2);
	printf("Su contrasena con letras y numero es: %s\n",Nombre3);
	printf("Su contrasena con signo es: %s\n",Nombre4);
	fflush(stdin);
	getch();
	
}
