 \n 2 = stop\n 3 = pause\n 4 = FF\n 5 = rew\n");
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
