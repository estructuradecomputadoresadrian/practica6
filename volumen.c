#include <stdio.h>
#include <math.h>
#define pi 3.14159

float cono (float r, float a, float conoresultado){
	int cuadrado = 2;
	r = pow(r, cuadrado);
	conoresultado = pi * r * a * 1/3;
	return(conoresultado);
}

void ortoedro (float l1, float l2, float a2){
	float resultadorto;
	resultadorto = l1 * l2 * a2;
	printf("El volumen de ese ortoedro es de %.2f.\n", resultadorto);
}

int main(){
	int comprobador;
	float radiocono, alturacono, conoresultado;
	float ortoAltura, lado1octaedro, lado2octaedro, octoresultado;
	printf("Algoritmo para calcular el volumen de ciertas figuras.\n");
	do
	{
		printf("¿Quiere calcular el volumen de un cono (1) o de un octaedro (2)?\n");
		scanf("%d",&comprobador);
		switch(comprobador){
			case 1:
			printf("Introduce el valor del radio del cono:\n");
			scanf("%f",&radiocono);
			printf("Introduce el valor de la altura del cono\n");
			scanf("%f",&alturacono);
			conoresultado=cono(radiocono,alturacono,conoresultado);
			printf("El volumen de ese cono es %.2f.\n",conoresultado);
			break;
			case 2:
			printf("Introduce el valor de un lado del ortoedro.\n");
			scanf("%e",&lado1octaedro);
			printf("Introduce el valor del otro lado.\n");
			scanf("%e",&lado2octaedro);
			printf("Introduce la altura.\n");
			scanf("%e",&ortoAltura);
			ortoedro (lado1octaedro, lado2octaedro, ortoAltura);
			break;
			default:
			printf("Introduzca un valor valido.\n");
			printf("Reiniciando el programa.\n\n");
			break;
		}

	} while (comprobador != 1 && comprobador !=2);

	return 0;
}