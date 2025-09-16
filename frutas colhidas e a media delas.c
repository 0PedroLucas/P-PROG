#include <stdio.h>

int main(){
    int laranja,banana,uva,morango,i, medialaranja=0, mediabanana=0, mediauva=0, mediamorango=0;
    int somauva=0,somabanana=0,somamorango=0,somalaranja=0;
    for(i=1;i<=7;i++){
        printf("\n---- dia %i ----\n", i);
        printf("\nQuantas laranjas voce colheu hoje: ") ;
        scanf("%i", &laranja);
        somalaranja=somalaranja+laranja;
        
        printf("\nQuantas bananas voce colheu hoje: ");
        scanf("%i", &banana);
        somabanana=somabanana+banana;
        
        printf("\nQuantas uvas voce colheu hoje: ");
        scanf("%i", &uva);
        somauva=somauva+uva;
        
        printf("\nQuantos morangos voce colheu hoje: ");
        scanf("%i", &morango);
        somamorango=somamorango+morango;
    }
    
    medialaranja = somalaranja/7;
    printf("\nMedia de laranjas dessa semana: %i" , medialaranja);
    
    mediabanana = somabanana/7;
    printf("\nMedia de bananas dessa semana: %i" , mediabanana);
    
    mediauva = somauva/7;
    printf("\nMedia de uvas dessa semana: %i" , mediauva);
    
    mediamorango= somamorango/7;
    printf("\nMedia de morangos dessa semana: %i" , mediamorango);
    
    if(medialaranja>mediabanana && medialaranja> mediauva && medialaranja> mediamorango){
        printf("\nA fruta com maior media foi a laranja!!");
    }
    else if(mediabanana>medialaranja && mediabanana> mediauva && mediabanana> mediamorango){
        printf("\nA fruta com maior media foi a banana!!");
    }
    else if(mediauva>mediabanana && mediauva> medialaranja && mediauva> mediamorango){
        printf("\nA fruta com maior media foi a uva!!");
    }
    else if(mediamorango>mediabanana && mediamorango> medialaranja && mediamorango> mediauva){
        printf("\nA fruta com maior media foi o morango!!");
}
else{
    printf("\nAs medias das frutas sao iguais!!");
    
}
}