

int poltrona(){
	int poltronas[2][3];
	int i, j;
	int col, lin;
	int fim = 0;
	
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			poltronas[i][j] = 0;
		}	
	}
do{
	printf("                                                                                 -----------------------  \n");
	printf(" Escolha sua poltrona:    pedimos desculpas pelos poucos lugares                |0 - livre | 1 - ocupado| \n");
	printf("                              cinema ainda em construção                         -----------------------  \n\n");
	printf("\t     1    2    3    \n");
	for(i=0;i<2;i++){
		printf("\t%d- ", i+1);
		for(j=0;j<3;j++){
			printf(" [%d] ",poltronas[i][j]);
		}
		printf("\n");
	}
	printf("\n\t_____________________\n                Tela\n");
	printf("\nLinha: ");
	scanf("%d",&lin);
	printf("\nColuna ");
	scanf("%d",&col);
	if (lin < 0 || col < 0 || lin > 2 || col > 3){
		printf("\n\nOpcao incorreta ");
		Sleep(2000);
		system("cls");
	}else{
		poltronas[lin-1][col-1] = 1;
		fim = 1;
	}
}while(fim == 0);
	system("cls");
	printf("                                                                                 -----------------------  \n");
	printf(" Escolha sua poltrona:    pedimos desculpas pelos poucos lugares                |0 - livre | 1 - ocupado| \n");
	printf("                              cinema ainda em construção                         -----------------------  \n\n");
	printf("\t     1    2    3    \n");
	for(i=0;i<2;i++){
		printf("\t%d- ", i+1);
		for(j=0;j<3;j++){
			printf(" [%d] ",poltronas[i][j]);
		}
		printf("\n");
	}
	printf("\n\t_____________________\n                Tela\n");
	printf("\n\nSua Poltrona foi reservada com sucesso! O filme vai começar apos a confirmação do pagamento... ");
	Sleep(2000);
	
}
