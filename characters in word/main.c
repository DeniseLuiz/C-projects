#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char palavra[30];
	char letra;
	int i;
	int soma = 0;
	
	fflush (stdin);
	printf ("Entre com a palavra desejada\n");
	scanf ("%s", palavra);
	
	fflush (stdin);
	printf ("Entre com o caracter desejado\n");
	scanf ("% c", & letra);
	
	for (i=0; palavra[i] !='\0'; i++)
	{
		if (palavra[i]== letra)
		{
			soma=soma+1;
		}
		
	}
	
		printf ("A quantidade de vezes que o caracter aparece eh %i", soma);
	
	return 0;
}
