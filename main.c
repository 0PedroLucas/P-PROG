#include <stdio.h>

int main(){
  int nmr, soma=0, i;
  printf("Digite um numero(0 para a soma): ");
  scanf("%i", &nmr);
  
  while(nmr != 0){
      soma+=nmr;
    printf("Digite um numero(0 para a soma): ");
    scanf("%i", &nmr);
  }
  printf("Soma total: %i", soma);
}
