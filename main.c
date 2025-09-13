#include <stdio.h>

int main(){
    int nmr, i;
    printf("\nDigite um numero: ");
    scanf("%i", &nmr);
    
    printf("\ntabuada do %i\n", nmr);
    for(i=1; i<=15; i++){
        printf("\n%i x %i = %i", nmr, i, nmr*i);
    }
}