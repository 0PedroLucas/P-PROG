#include <stdio.h>
#include <stdlib.h>

int main(){
    float notas[5];
    int i, soma=0;
    float media;
    
    for(i=1;i<=5;i++){
        printf("Digite sua nota: ");
        scanf("%f" , &notas[i]);
        soma= soma + notas [i];
    }
    printf("\nNotas digitadas: ");
    for(i=1;i<=5;i++){
        printf("%.1f,", notas[i]);
    }
    media = soma/5;
    printf("\nEssa é a media dos alunos: %.2f", media);
    
}