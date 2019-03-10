#include <stdio.h>

//Programa extra con la funcionalidad añadida de caclular los numeros impares o pares y los extremos del intervalo para reafirmar conceptos
//El programa tiene varias cosas que no sería tan rentable hacerlas con funciones para practicar.

int hub (int hub){ 
	//Funcion para saber si se va a realizar alguna operacion despues del calculo.
	char repetidor;
	do
	{
		printf("¿Quieres realizar alguna otra operacion? (S o N)\n");
		scanf(" %c", &repetidor);
		switch(repetidor){
			case 's':
			case 'S':
			printf("Volviendo al menu principal.\n");
			hub = 1;
			break;
			case'n':
			case'N':
			printf("Cerrando aplicacion.\n");
			hub = 0;
			break;
			default:
			printf("Valor no especificado, repitiendo la pregunta.\n");
			hub = 2;
			break;
		}		
	} while (hub!=1 && hub!=0);
	return(hub);
}


int calcular_extremos(){
	//Funcion para preguntar si se querran calcular los extremos
	int extremos;
	char comprobadorchar;
	do
	{
		printf("¿Quieres tener en cuenta los extremos en el cálculo? (S ó N)\n");
		scanf(" %c", &comprobadorchar);
		switch (comprobadorchar){
			case 's':
			case 'S':
			printf("Los extremos seran tomados en cuenta en el cálculo.\n");
			extremos = 1;
			break;
			case 'n':
			case 'N':
			printf("No se tendran en cuenta los extremos en el cálculo\n");
			extremos = 0;
			break;
			default:
			printf("Valor no definido, repitiendo la pregunta.\n\n");
			break;
	}
	} while (extremos!=0 && extremos!=1);
	return (extremos);
}

void numeros_impares(){

}


void numeros_pares(){
	int a, b, resultado, extremos;
	do
	{
		printf("Introduce el valor mínimo del intervalo:\n");
		scanf("%d",&a);
		printf("Introduce el valor máximo del intervalo:\n");
		scanf("%d",&b);
		extremos = calcular_extremos();
		if (extremos == 1){
			a++;
			b--;
		}
		if (b>=a){
			for (int i=b; i>=a; i--){
			resultado = i % 2;
			if (resultado == 0)
			{
				printf("Uno de los numeros pares de ese intervalo es %d.\n", i);
			}
		}
	}
	else{
		printf("¡El valor minimo no puede ser mas grande que el valor máximo!\n\n");
	}
	} while (a>b);
}


int main () {
	int accion, inicio;
	do{
		printf("Programa que calcula ciertos numeros dentro de un intervalo.\n\n");
		do
		{
			printf("¿Que desea calcular?\n");
			printf("[1] Numeros pares dentro de un intervalo.\n[2] Numeros impares dentro de un intervalo.\n[3] Abandonar el programa.\n");
			scanf("%d",&accion);
			switch (accion){
				case 1: 
					numeros_pares(); //Llamo a la funcion que calcula los numeros pares.
					inicio = hub(inicio); //Llamo a la funcion para decidir si se quiere realizar otro cálculo
					break;
				case 2:
					numeros_impares(); //Llamo a la funcion que calcula los numeros impares.
					inicio = hub(inicio); //Llamo a la funcion para decidir si se quiere realizar otro cálculo
					break;
				case 3:
					printf("Saliendo.\n\n");
					break;
				default:
					printf("Valor no especificado.\nReiniciando\n\n");
					break;
				}

			} while (accion!=1 && accion!=2 && accion!=3);	
		} while (inicio != 1);
	

	return 0;
}

