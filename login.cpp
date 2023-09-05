int faz_login(){
	char compara_email[40], compara_senha[40];
	int i;
	
	printf("\n\n\t\tDigite seu email: ");
	scanf("%s",&compara_email);
	printf("\n\t\tDigite sua senha: ");
	scanf("%s",&compara_senha);
	for(i=0;i<20;i++){
		if(strcmp(compara_email, cliente[i].email) == 0){
			
			if(strcmp(compara_senha, cliente[i].senha) == 0){
				return i;
			}
		}
			
	}
	
	return -1;
	
}
