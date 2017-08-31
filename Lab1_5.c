
#include <stdio.h>


void inter( int *valor1, int *valor2);


int main ()
 {


 	int numA,numB;

	printf("Programa para intercambiar valores de dos numeros\n");

	printf("Ingrese un numero para la variable A: ");

	scanf("%d",&numA);

	printf("Ingrese otro numero para la variable B: ");

	scanf("%d",&numB);

	printf("Los valores actuales son\n");

	printf("\tVariable A: %d\n", numA);

	printf("\tVariable B: %d\n", numB);

	printf("Se envian variables a intercambiar sus valores entre ellas");

	inter( &numA, &numB);

	printf("\n Ahora el valor de la variable A es: %d\n y el valor de la variable B es: %d\n",numA ,numB);

	return 0;

}



void inter( int *valor1, int *valor2)
{


	int aux;

	aux = *valor1;

	*valor1 = *valor2;

	*valor2 = aux;

}
