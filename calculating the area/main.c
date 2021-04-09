#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	// Definindo variáveis:
 	int base;
 	int altura;
 	int area;
 	
 	// Definindo os valores pelo usuários:
 	printf("Digite o valor da base");
 	scanf("%i", &base);
 	
 	printf("Digite o valor da altura");
 	scanf ("%i", &altura);
 	
 	// Operação matemática:
 	area = base*altura;
 	
 	
 	// Imprimindo na tela o resultado final:
 	printf(" O valor da area do retangulo = %i \n", area );
	return 0;
}
