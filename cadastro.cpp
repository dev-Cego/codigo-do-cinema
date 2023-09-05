int faz_cadastro() {
    char copia_nome[40], copia_senha[40], copia_email[40];
    int copia_idade, i, j;

    printf("\n\n\t\tDigite seu email: ");
    scanf("%s", &copia_email);
    printf("\n\t\tDigite sua senha: ");
    scanf("%s", &copia_senha);
    printf("\n\t\tDigite seu nome: ");
    scanf("%s", &copia_nome);
    printf("\n\t\tDigite sua idade: ");
    scanf("%d", &copia_idade);

    for (i = 0; i < 20; i++) {
        if (strcmp(copia_email, cliente[i].email) == 0){
                return 1;
        } else {
        	
        	if(cliente[i].codigo == 0){
        		strcpy(cliente[i].email, copia_email);
	            strcpy(cliente[i].senha, copia_senha);
	            strcpy(cliente[i].nome, copia_nome);
	            cliente[i].idade = copia_idade;
	            cliente[i].codigo = i + 1;
	            
				return 0;
			}
            
        }
    }
}
