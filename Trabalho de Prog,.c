#include <stdio.h>
#include <stdlib.h>

int main(){
    int av1, av2, av3;
    int qntd = 1000;
    
    printf("Digite o numero de carros na avenida 1 (Na ultima hora) : ");
    scanf("%i", &av1);
    
    printf("Digite o numero de carros na avenida 2 (Na ultima hora) : ");
    scanf("%i", &av2);
    
    printf("Digite o numero de carros na avenida 3 (Na ultima hora) : ");
    scanf("%i", &av3);
    
    	if(av1>1000 && av2>1000 && av3>1000){
	printf("\n\a⚠️ ATENÇÃO ⚠️  TODAS AS AVENIDAS EXCEDERAM O LIMITE");
	return 0;
	}
    
    if( av1>qntd ){
        printf("\n⚠️ ATENÇÃO ⚠️ A AVENIDA 1 EXCEDEU O LIMITE DE CARROS!!");
        }
        else{
            printf("\nA avenida 1 esta dentro do limite!!");
        }
    
     if( av2>qntd ){
        printf("\n⚠️ ATENÇÃO ⚠️️ A AVENIDA 2 EXCEDEU O LIMITE DE CARROS!!");
        }
        else{
            printf("\nA avenida 2 esta dentro do limite!!");
    }
     if( av3>qntd ){
        printf("\n⚠️ ATENÇÃO ⚠️ A AVENIDA 3 EXCEDEU O LIMITE DE CARROS!!");
        }
        else{
            printf("\nA avenida 3 esta dentro do limite!!");
    }
    if(av1<=qntd && av2<=qntd && av3<=qntd){
        printf("\nNENHUMA DAS AVENIDAS EXCEDEU O LIMITE DE CARROS!!");
    }
    }