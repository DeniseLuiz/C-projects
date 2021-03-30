#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
// Definindo variável:
int acao;

// Solicitando aos usuários:
//Simulando opções de um player 
	printf("*Simulando opções de um player*/n");

    printf("Pressione a tecla desejada sendo:\n 1 = play \n 2 = stop\n 3 = pause\n 4 = FF\n 5 = rew\n");
	scanf("%i", &acao);

switch (acao){
    case 1:
     printf("Tocando...");
     break;
	
	case 2: 
		printf("Parado.");
		break;
		
	case 3:
		printf("Aguardando...");
		break;
		
	case 4:
		printf("Avancando...");
		break;
		
	case 5:
		printf("Retrocedendo...");
		break;
		
	default:
		printf("tecla invalida");
		break;

}

	return 0;
}
