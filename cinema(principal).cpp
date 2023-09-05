#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <locale.h>

//include das paginas

#include "banco_de_dados.cpp"
#include "cadastro.cpp" 
#include "login.cpp"
#include "filme.cpp"
#include "poltrona.cpp"
#include "tempo.cpp"
#include "assistir.cpp"
int main(){


	setlocale(LC_ALL,"Portuguese");

	int final = 0, escolha = 0, i, usuario = 0, duracao = 0, cadastro = 0;
	int valor = 0; 
	int desconto = 5;
	
	for(i=0;i<20;i++){
		cliente[i].codigo = 0;
	}

	do{

	comida.coca = 0;
	comida.combo1 = 0;
	comida.combo2 = 0;
	comida.pipoca = 0;
		system("cls");
		
		printf("<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n");
		printf("\n\t\t\Cinema gerado por IA \n\t Digite o nome do filme e ele será criado \n\n\t    Preço fixo do ingresso: 20,00 R$\n");
		printf("<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n");

		Sleep(3000);
		system("cls");


		printf("\n\n\t\t1-Login ");
		printf("\n\t\t2-Cadastro ");
		printf("\n\t\t3-Entrar como convidado ");
		printf("\n\t\t4-Sair. \n\n\t\tEscolha: ");
		scanf("%d",&escolha);


		switch(escolha){
			case 1 : 
				system("cls");
				usuario = faz_login();
				if(usuario != -1){
					system("cls");
					printf("\n\n\t\tOlá %s, voce ganhou desconto!! ",cliente[usuario].nome);
					Sleep(2000);
					system("cls");
					valor = filme();
					system("cls");
					valor = (valor - desconto);
					printf("\n\nDesconto aplicado, novo valor %d \n", valor);
					Sleep(2000);
					duracao = tempo();
					poltrona();
					assistir(duracao, valor);
					
					
					
				}
				else{
					system("cls");
					printf("\n\n\t\tUsuario não encontrado ");
					Sleep(2000);
					system("cls");
				}
				
			break;
			
			case 2 :

				system("cls");
				cadastro = faz_cadastro();
				
				if(cadastro == 0){
					system("cls");
					printf("\n\n\t\tCadastro Realizado com sucesso ");
					Sleep(2000);
					system("cls");
				}else if(cadastro == 1){
					printf("\n\n\t\tEmail em uso ");
					Sleep(2000);
					system("cls");
				}

			break;
			
			case 3 :
				
				system("cls");
				valor = filme();
				system("cls");
				printf("\n\nValor Total: %d \n", valor);
				Sleep(2000);
				duracao = tempo();
				poltrona();
				assistir(duracao, valor);

			break;
			
			case 4 :
				system("cls");
				printf("\n\t Até mais!! \n");
				final = 1;
			break;
			
			case 142 :
				system("cls");
				printf("\n\n\t\t Usuarios cadastrados \n");
				for(i=0;i<20;i++){
					if(cliente[i].codigo != 0){
						printf("\n\t\tNome: %s",cliente[i].nome);
						printf("\n\t\tEmail: %s",cliente[i].email);
						printf("\n\t\tSenha: %s",cliente[i].senha);
						printf("\n\t\tIdade: %d",cliente[i].idade);
						printf("\n\t\tCodigo: %d\n\n",cliente[i].codigo);
					}
				}
				getch();
				system("cls");
			break;
			
			default :
				system("cls");
				printf("\nOpção invalida, escolha outra ");
				Sleep(2000);
				system("cls");
		}
		
	}while(final == 0);

}
