#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	// Definindo variáveis:
	int num1;
	int num2;
	char operacao;
	int cont;
	
do{
	
	// Solicitando ao usuário 
	printf("Calculadora\n");
	
	printf("Entre com o primeiro valor inteiro");
	scanf("%i\n",&num1);

	printf("Entre com o segundo valor inteiro");
	scanf("%i\n",&num2);
	
	fflush(stdin);
	printf("Entre com o sinal de operacao +, -, * ou /:");
	scanf("%c",&operacao);
	
	//Aplicando switch
	
	
	switch (operacao)
	{
		case '+':
			printf("%i\n", num1+num2 );
			break;
			
		case '-':
			printf("%i\n", num1-num2);
			break;
		
		case '*':
			printf("i%\n", num1*num2);
			break;
			
		case '/':
			printf("%i\n", num1/num2);
			break;
		default:
			printf("Operacao invalida\n");
			break;
	}
}
 while (cont ==1);{
	printf("Deseja continuar? 1 - sim ou 2 - nao\n");
	scanf("%i\n", cont);
}
				//{
			//	printf("Recomecando");

	return 0;
}
