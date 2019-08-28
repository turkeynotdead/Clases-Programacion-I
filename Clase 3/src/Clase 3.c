

#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD_DE_NUMEROS 5

int promedio (int valor1, int valor2, int valor3, int valor4, int valor5);
int max (int valor1, int valor2, int valor3, int valor4, int valor5);
int min (int valor1, int valor2, int valor3, int valor4, int valor5);


int main(void) {
	int value1, value2, value3, value4, value5;
	int average;
	printf ("Ingrese el primer numero: ");
	scanf ("%d" ,&value1);
	printf ("Ingrese el segundo numero: ");
	scanf ("%d" ,&value2);
	printf ("Ingrese el tercer numero: ");
	scanf ("%d" ,&value3);
	printf ("Ingrese el cuarto numero: ");
	scanf ("%d" ,&value4);
	printf ("Ingrese el quinto numero: ");
	scanf ("%d" ,&value5);
	average = promedio (value1, value2, value3, value4, value5);
}

int promedio (int valor1, int valor2, int valor3, int valor4, int valor5){
	int suma;
	int promedio;
	suma = valor1 + valor2 + valor3 + valor4 + valor5;
	promedio = suma / CANTIDAD_DE_NUMEROS;
	return promedio;
}



/* Pedir al usuario una cantidad de valores por define
 * calcular máximo, minimo y promedio
 * avisar si salio bien o mal e informar por print en main.
 */

/*#include <stdio.h>
#include <stdlib.h>
#define NUMEROS_A_PEDIR 6
int pedirNumerosYCalcular(int *maximo, int *minimo, float *promedio);

int main(void) {
	int maximo;
	int minimo;
	float promedio;
	if (pedirNumerosYCalcular(&maximo,&minimo,&promedio)==0){
		printf("Maximo: %d  Minimo: %d  Promedio: %.2f ",maximo,minimo,promedio);
	}else{
		printf("Error.");
	}


	return 0;
}

int pedirNumerosYCalcular(int *maximo, int *minimo, float *promedio)
{
	int retorno = 0;
	int numero;
	int acumulador = 0;
	int contador = 0;
	int maximoAuxiliar;
	int minimoAuxiliar;

	while (contador < NUMEROS_A_PEDIR)
	{
		printf("Ingrese un numero: ");
		scanf("%d",&numero);
		if(contador == 0){
			maximoAuxiliar = numero;
			minimoAuxiliar = numero;
		}
		if (numero > maximoAuxiliar){
			maximoAuxiliar = numero;
		}
		if (numero < minimoAuxiliar){
			minimoAuxiliar = numero;
		}
		acumulador = acumulador + numero;
		contador++;
	}
	*maximo = maximoAuxiliar;
	*minimo = minimoAuxiliar;
	*promedio = (float) acumulador / (float) contador;
	return retorno;/*
