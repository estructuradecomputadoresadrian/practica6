#include <stdio.h>


void numeros_primos(int b, int a){
	int resultado;
	int i;
	for (i=a; i>=b; i--){
		resultado = i % 2;
		if (resultado == 0)
		{
			printf("Uno de los numeros pares de ese intervalo es %d.\n", i);
		}
	}
}

int main () {
	int m, n;
	printf("Programa que muestra los numeros pares dentro de un intervalo.\n\n");
	do
	{
		printf("Introduzca el valor más alto del intervalo:\n");
		scanf("%d",&m);
		printf("Introduzca el valor minimo del intervalo:\n");
		scanf("%d",&n);
		if (m > n){

		numeros_primos(n, m);
		}
		else{
			printf("Error. El primer valor tiene que ser mayor que el segundo.\n");
			printf("Reiniciando.\n\n");
		}
	} while (m<=n);

	return 0;
}

