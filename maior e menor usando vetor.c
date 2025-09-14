#include <stdio.h>

int main(){
    int numero[10];
    int i, maior, menor;
    for(i=0;i<10;i++){
        printf("Digite um numero: ");
        scanf("%i", &numero[i]);
    }
    
    maior=menor=numero[0];
    
    for(i=1;i<10;i++){
        if(numero[i]>maior){
            maior=numero[i];
        }
        if(numero[i]<menor){
            menor=numero[i];
        }
    }
    
    printf("Numeros digitados: ");
    for(i=0;i<10;i++){
        printf("%i, ", numero[i]);
    }
    printf("\nMaior numero: %i" ,maior);
    printf("\nmenor numero: %i" ,menor);
    
    
}
