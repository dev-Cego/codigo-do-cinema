#include "texto.cpp"

#define co 6
#define pip 22
#define combo_1 20
#define combo_2 15
int filme (){
	int confirma = 0, categoria = 0;
	char titulo [30];
	int duracao;
	int num;
	int escolha;
	int valor_final = 20;
	int i;
	printf("\n\t\tNome do filme escolhido: ");
	fflush(stdin);
	scanf("%30[^\n]s",&titulo);
	
	
	
do{
	printf("\n\n\t\tDigite a categoria do seu filme \n\t[1]Comedia [2]Terror [3]Açao [4]Drama [5]Romance \n\n \tCategoria escolhida: ");
	scanf("%d",&categoria);

	switch (categoria){
		case 1 :
			printf("\n\tVoce selecionou Comedia ");
		break;

		case 2 :
			printf("\n\tVoce selecionou Terror ");
		break;

		case 3 :
			printf("\n\tVoce selecionou Açao ");
		break;

		case 4 :
			printf("\n\tVoce selecionou Drama ");
		break;

		case 5 :
			printf("\n\tVoce selecionou Romance ");
		break;

		default :
			printf("\n\tCategoria nao encontrada, tente novamente: ");
			Sleep(1500);
		break;
	}
}while(categoria < 0 || categoria > 5);
		Sleep(2000);
		system("cls");
		do{
			printf("\n\n\t\Voce deseja algum tipo de alimento ou bebida? [1]sim/[2]nao ");
			scanf("%d",&confirma);
			if(confirma > 2 || confirma < 1){
				printf("\n\n\t\tOoops, opção incorreta ");
				Sleep(3000);
				system("cls");
			}
		}while(confirma > 2 || confirma < 1);
		
		if(confirma == 1){
			do{
				num = 2;
				system("cls");
				textos(num);
				printf("\n\n\tCOMBOS: \t\t\t\t\tPorções separadas: \t\t\t[5]finalizar.\n\t[1]Mc Lanche feliz + coca 600 R$20,00 \t\t[3]Pipoca(tamanho unico) R$22,00\n\t[2]Mc chicken + coca 600 R$15,00  \t\t[4]Coca Cola 600ml R$6,00 \n\t");
				scanf("%d",&escolha);
				switch (escolha){
					case 1 :
						printf("\n\tVoce selecionou 1 Mc Lanche feliz + coca 600");
						Sleep(2000);
						system("cls");
						valor_final += combo_1;
						comida.combo1++;
					break;
			
					case 2 :
						printf("\n\tVoce selecionou 1 Mc chicken + coca 600");
						Sleep(2000);
						system("cls");
						valor_final += combo_2;
						comida.combo2++;
					break;
			
					case 3 :
						printf("\n\tVoce selecionou 1 Pipoca(tamanho unico) ");
						Sleep(2000);
						system("cls");
						valor_final += pip;
						comida.pipoca++;
					break;
			
					case 4 :
						printf("\n\tVoce selecionou 1 Coca Cola 600ml");
						Sleep(2000);
						system("cls");
						valor_final += co;
						comida.coca++;
					break;
			
					case 5 :
						printf("\n\tVoce finalizou a compra em %d reais somando o ingresso ", valor_final);
						Sleep(2000);
						system("cls");
					break;
					
					default :
						printf("\n\tOpcao invalida, tente novamente: ");
						Sleep(1500);
					break;
				}
			}while(escolha != 5);
			return valor_final;
		}else if(confirma == 2){
			return valor_final;
		}
}
