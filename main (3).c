#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){	
	setlocale(LC_ALL, "portuguese");
	
	int L, C;
	
	printf("Digite a quantidade de linhas da matriz: ");
	scanf("%i", &L);
	
	printf("Digite a quantidade de colunas da matriz: ");
	scanf("%d", &C);
	
	int mat [L][C], valor;
	
	printf("Digite muitos valores: ");
	for(int i = 0; i < 	L; i++){
		printf("\n%da linha: \n", i+1);
		for(int j = 0; j < L; j++){
			scanf("%d", &mat[i][j]);
		}
	}
	
	printf("\nSua matriz é: \n");
	for(int i = 0; i < C; i++){
		for(int j = 0; j < C; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}