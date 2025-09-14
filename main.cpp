#include <stdio.h>

int main(){
float nmr1,nmr2;
char opr;
printf("Digite um numero: ");
scanf("%f", &nmr1);

printf("\nDigite outro numero: ");
scanf("%f", &nmr2);

printf("\n Digite operador( +,*,-,/): ");
scanf(" %c", &opr);

switch(opr){
    case '+':
    printf("%.2f + %.2f = %.2f" ,nmr1,nmr2, nmr1+nmr2);
    break;
    case '*':
    printf("%.2f * %.2f = %.2f" ,nmr1,nmr2, nmr1*nmr2);
    break;
    case '-':
    printf("%.2f - %.2f = %.2f",nmr1,nmr2,nmr1-nmr2);
    break;
    case '/':
    if(nmr2 != 0){
    printf("%.2f / %.2f = %.2f", nmr1, nmr2, nmr1/nmr2);}
    else{printf("Divisão por 0 não existe!");
    break;
    default:
    printf("Operador invalido!");
    break;
}
}
}