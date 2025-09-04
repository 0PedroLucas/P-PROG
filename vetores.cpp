#include <stdio.h>
#include <locale.h>

int main(){
 int qntd, i;

printf("Qual a quantiade de dados armazenados: ");
scanf("%i", &qntd);
int notas[qntd];
for(i=0;i<qntd;i++){
	printf("\nDigite um valor: ");
	scanf("%i", &notas[i]);
	}
for(i = 0; i<qntd;i++){
	printf("\nNumero digitado:  %i", notas[i]);
    }
}

