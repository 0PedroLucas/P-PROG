#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

int main(){
    int nsecreto,nmr,i;
    srand(time(NULL));
    nsecreto= rand() %20 + 1;
    printf("Voce tem 5 tentativas para acertar um numero entre 1 e 20!");
    
    for(i=1;i<=5;i++){
        printf("\nTentativa %i:", i );
        scanf("%i", &nmr);
            if(nmr>nsecreto){
                printf("Chute mais baixo!");}
        
        else if(nmr<nsecreto){
            printf("Chute mais alto!");}
        
        else{ 
            printf("VOCE ACERTOU!!", nmr);
        
        break;}
}
 if( nmr != nsecreto){printf("\nSuas tentativas acabaram =(");}
    return 0;
}
