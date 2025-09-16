#include <stdio.h>

int main(){
    int nmr;
    
    do{
        printf("\nAdivinhe o numero!\n");
        scanf("%i", &nmr);
        
        if(nmr!=1){
            printf("\nErrou!tente novamente...");
        
             if(nmr>10){
                printf("\nEsta longe!\n");
            }
            else if(nmr>5){
                printf("\nesta perto!\n");
            }
            else if(1<nmr && nmr<5){
                printf("\nesta muito perto!\n");
            }
        }
    }
        
    while(nmr!=1);
    
    printf("\nPARABENS, VOCE ACERTOU!!");
}