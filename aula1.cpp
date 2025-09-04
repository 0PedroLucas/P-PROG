#include <stdio.h>
#include <locale.h>

float av1,av2,av3;
float t1,t2,t3;
float p1,p2,p3;
float media;
int main(){
	setlocale(LC_ALL,"portuguese");
	printf("\nDigite a nota do trabalho 1:");
	scanf("%f",&t1);
	printf("\nDIgite a nota da prova 1:");
	scanf("%f",&p1);
	printf("\nDigite a nota do trabalho 2:");
	scanf("%f",&t2);
	printf("\nDIgite a nota da prova 2:");
	scanf("%f",&p2);
	printf("\nDigite a nota do trabalho 3:");
	scanf("%f",&t3);
	printf("\nDIgite a nota da prova 3:");
	scanf("%f",&p3);
	av1=(t1*0.2)+(p1*0.8);
	av2=(t2*0.2)+(p2*0.8);
	av3=(t3*0.2)+(p3*0.8);
	media = (av1+av2+av3)/3;
	printf("\nSua media é: %.1f", media);
	if(media >= 6){
    printf(" AP");
	}
    if(media<6){
	printf(" RP");
    }    
    if(media <6 && media >=4){
    printf(" EX");
	}
}


