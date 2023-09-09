#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define  TAM   5
#define  RANG  29

int ImprimeArr (int Arr[], int tam);
int SumaElementos (int Arr[], int tam);
int InicArr(int Arr[], int tam, int rango);

/*codigo teams Paradigmas de Programacion*/


int main ()
{
	/*declaramos el arreglo*/
	int arr1[TAM]={0};
	
	InicArr(arr1, TAM, RANG);
	ImprimeArr(arr1, TAM);
	SumaElementos(arr1, TAM);
	
	return 0;
	
}

/*Imprime los elementos del arreglo dado*/
int ImprimeArr (int Arr[],int tam)
{
	int i;
	for (i=0;i<tam;i++)
	  {
        printf("%d, ", Arr[i]);
	  }
	return 0;
}

/*Suma los elementos del arreglo dado e Imprime el Resultado*/
int SumaElementos (int Arr[], int tam)
{
	int i,suma=0;
	for (i=0;i<tam;i++)
	  {
		suma+=Arr[i];
	  }
	printf("\nLa suma de los elementos es: %d\n", suma);		  
	return 0;
}

/*Inicializa el arreglo con numeros aleatorios dentro de un rango dado*/
int InicArr (int Arr[], int tam, int rango)
  {
	int i;
	srand(time(NULL));
	for (i=0;i<tam;i++)
	{
	  Arr[i] = rand()%rango;
	}
	return 0;
  }