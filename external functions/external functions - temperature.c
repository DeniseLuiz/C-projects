#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void maior ( float temperatura [10]);
void menor ( float temperatura [10]);

int main(int argc, char *argv[]) {
	
	float temperatura[10];
	int i;
	float maiortemp;
	float menortemp;
	
	for (i=0; i<10; i++){
		printf("Entre com o valor de temperatura %i\n", i+1);
		scanf ("%f", &temperatura[i]);
	}

	maior (temperatura);
	menor (temperatura);
	
	return 0;
}

void maior ( float temperatura[10]){
	float maior =0;
	int i;
	
	for (i=0; i<10; i++){
		if ( temperatura[i]> maior){
		maior = temperatura [i];
		}
	}
	printf("Maior temperatura = %f\n", maior);
}

void menor (float temperatura[10]){
	float menor = temperatura [0];
	int i;
	
	for (i=0; i<10; i++){
		if ( temperatura[i] < menor){
		menor = temperatura [i];
		}
		}
		printf("Menor temperatura = %f\n", menor);
	}
