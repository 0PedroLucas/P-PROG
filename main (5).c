#include <stdio.h>

int main(){
    float valor;
    int opção;
    while(1){
        printf("\n---CONVERSÕES---");
    printf ("\n1 - Kilometros (transformar em milha) ");
    
    printf ("\n2 - Celcius (transformar em fahrenheit) ");
    
    printf ("\n3 - Kilogramas (transformar em libras) ");
    
    printf ("\n4 - Metros (transformar em centimetros) ");
    
    printf("\n5 - Sair");
    
    printf("\nSelecione uma conversao:");
    scanf("%i" ,&opção);
    
    if(opção==5){
        printf("Saindo do programa!!");
        break;
    }
    if(opção>5){
        printf("Esta opção não existe, tente novamente!\n");
        continue;
    }
        printf("Digite o valor para ser convertido: ");
        scanf("%f", &valor);
               switch(opção){
            case 1:
            printf("%.2f / 1.60 = %.2f", valor, valor/1.60);
            break;
            
            case 2:
            printf("(%.2f x 9/5) + 32 = %.2f" ,valor, (valor * 9/5) + 32);
            break;
            
            case 3:
            printf("%.2f x 2.20 = %.2f" ,valor, valor * 2.20);
            break;
            
            case 4:
            printf("%.2f / 100 = %.2f", valor, valor * 100);
            break;
            
            default:
                printf("Erro inesperado, tente novamente!");
                break;
            }
        }
    }
    