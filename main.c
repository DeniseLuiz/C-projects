#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



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


