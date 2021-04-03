#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char nomes [5][40];
	float notas[5][2];
	float media = 0;
	int i;
	float soma = 0;
	float maior;
	float menor;

	
	for (i=0; i<5; i++){
		printf ("Entre com o nome do aluno %i\n", i+1);
		gets (nomes[i]);
		
		printf ("Entre com a nota 1 do aluno %i\n", i+1);
		scanf("%f", &notas[i][0]);
		
		printf ("Entre com a nota 2 do aluno %i\n", i+1);
		scanf ("%f", &notas[i][1]);	
	}

	for (i=0; i<5; i++){
		media = ( notas[i][0] + notas [i][2])/2;
		printf ("Aluno $s - media %f\n", nomes[i], media );
		soma = soma + media;
	}
	
	printf ("Media geral da sala = %i", soma/5);
	
	for (i=0; i<5; i++){
		
	if (notas[i][0]> maior){
		maior = notas [i][0];
	} if (notas[i][1] > maior){
		maior = notas[i][1];
	}if (notas[i][0] < menor){
		menor = notas[i][0];
	}if (notas[i][1] < menor){
		menor = notas[i][1];
	}
	}
	
	printf ("Maior nota = %i", maior);
	printf ("Menor nota = %i", menor);
	
	return 0;
}
