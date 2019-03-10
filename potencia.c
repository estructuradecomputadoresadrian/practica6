#include <stdio.h>
#include <math.h>

void potencia (float b, float e){
	float resultado;
	resultado=pow(b,e);
	printf("El resultado es %f.\n", resultado);
}

int main () {
	float base, exponente;
	printf("Algoritmo que calcula la potencia dada la base y el exponente.\n\n");
	do
	{
		printf("Introduce la base:\n");
		scanf("%f",&base);
		printf("Introduce el exponente:\n");
		scanf("%f",&exponente);
		if ( base >= 0 && exponente >= 0){
			potencia(base, exponente);
		}
		else{
			printf("Error,los numeros deben ser positivos.\n");
			printf("Reiniciando.\n\n");
		}
	} while (base < 0 || exponente < 0);
	return 0;
}