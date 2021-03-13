#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	// Definindo variáveis:
	float hipotenusa; 
	float cateto1;
	float cateto2;
	
	// Recebendo os valores dos usuários:
	printf("Entre com os valores dos catetos \n");
	scanf("%f", &cateto1);
	scanf("%f", &cateto2);
	
	// Operação matemática
	hipotenusa = sqrt (pow(cateto1, 2) + pow (cateto2,2));
	
	printf(" Hipotenusa = %.2f\n", hipotenusa);
	
	return 0;
}
