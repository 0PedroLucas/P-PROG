#include <stdio.h>
#include <locale.h>

int main(){
 int qntd, i,j,l,c;
 printf("qunatidade de linhas maximas: ") ;
 scanf("%i",&l);
 printf("Digite o numero de colunas maxima: ");
 scanf("%i", &c);
 
/*
printf("Qual a quantiade de dados armazenados: ");
scanf("%i", &qntd);
int notas[qntd];
for(i=0;i<qntd;i++){
	printf("\nDigite um valor: ");
	scanf("%i", &notas[i]);
	}
for(i = 0; i<qntd;i++){
	printf("\nNumero digitado:  %i", notas[i]);
    }*/
    int mat[7][3];
 printf("digite um valor: ");
 scanf("%i", &mat[0][0]);
for (i=0;i<l;i++){//linha
	for(j=0;j<c;j++){//coluna
	printf("Digite um valor: ");
	scanf("%i", &mat[i][j]);
		
	}
}
printf("Sua matriz:\n");
for (i=0;i<l;i++){
	for(j=0;j<c;j++){
		printf("%i ", mat[i][j]);
	}
	printf("\n");
}
}


