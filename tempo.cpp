int tempo(){
int i, x = 0;
	system("cls");
		for(int i =0;i<6;i++){
			printf("\n\n\t\tProcessando uma duraçao de filme adequada . ");
			Sleep(200);
			system("cls");
			printf("\n\n\t\tProcessando uma duraçao de filme adequada . . ");
			Sleep(200);
			system("cls");
			printf("\n\n\t\tProcessando uma duraçao de filme adequada . . . ");
			Sleep(200);
			system("cls");		
		}
		
		x = rand() % 121 + 61;
		printf("\n\n\t\tDuração decidida: %d horas e %d minutos",x/60, x%60);
		Sleep(3000);
		system("cls");
return x;	
}
