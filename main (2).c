#include <stdio.h>


int main(){
    int nmr, nsecreto = 4 , op =0;
        
        while( nmr !=0){
            
        printf("\nDigite um numero entre 1 e 20: ");
        
        scanf("%i", &nmr);
        
        if(nmr>nsecreto){
            
            printf("\nChute mais baixo!");
        }
        else if(nmr<nsecreto){
            
            printf("\nChute mais alto!");
        }
        else{
            
            printf("\nVOCE ACERTOU!");
            return 0;
        }
    
    }
    }
