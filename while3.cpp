#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int op = 0;
	
	while(op != 5){
		printf("\n------------");
		printf("\n1 - Inserir Dados");
		printf("\n2 - Alterar Dados");
		printf("\n3 - Listar Dados");
		printf("\n4 - Deletar Dados");
		printf("\n5 - Sair ");
		printf("\n------------");
		printf("\nDigite a opção desejada: ");
		scanf("%i", &op);
		fflush(stdin);
		
		system("cls");
		
		
		switch(op){
			case 1:
				printf("\nInserindo os Dados...");
				break;
			case 2:	
				printf("\nAlterando os Dados...");
				break;
			case 3:
				printf("\nListando os Dados...");
				break;
			case 4:
				printf("\Deletando os Dados...");	
				break;
				case 5:
				printf("\nsaindo...");
				break;
			default:
				break;
		}

	}
}
