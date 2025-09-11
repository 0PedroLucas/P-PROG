#include <stdio.h>
typedef struct dados
{
	char nome[30];
	int peso, idade;
	float altura, imc;
} dados;
int main()
{
	int qntdpessoas, i;
	printf("Calcular o IMC de quantas pessoas: ");
	scanf("%i", &qntdpessoas);
	fflush(stdin);
	
	dados pessoa[qntdpessoas];

	for(i=0;i<qntdpessoas;i++){
		
		printf("Digite o nome da pessoa: ");
	gets(pessoa[i].nome);
	fflush(stdin);

	printf("Digite a idade da pessoa: ");
	scanf("%i", &pessoa[i].idade);

	printf("Digite o peso da pessoa: ");
	scanf("%i", &pessoa[i].peso);

	printf("Digite a altura da pessoa: ");
	scanf("%f", &pessoa[i].altura);

	pessoa[i].imc = pessoa[i].peso / (pessoa[i].altura * pessoa[i].altura);

	}
for(i=0; i<qntdpessoas;i++){
	printf("\nNome digitado: %s", pessoa[i].nome);

	printf("\npeso digitado: %i", pessoa[i].peso);

	printf("\naltura digitado: %.2f", pessoa[i].altura);

	printf("\nIdade digitada: %i", pessoa[i].idade);

	printf("\nSeu IMC é: %f", pessoa[i].imc);
	if (pessoa[i].imc < 20){
      	printf("\nVoce esta abaixo do peso");
	}
	else if (20 <= pessoa[i].imc <= 24.9){
		printf("\nVoce esta no peso normal");
	}
		else if (25<pessoa[i].imc<+29.9){
			printf("\nVoce possui obesidade moderada");
		}
		else if(30<pessoa[i].imc<=39.9){
			printf("\nVoce possui obesidade moderada");
		}
		else if (pessoa[i].imc>40){
			printf("\nVoce possui obesidade morbida");
		}


}

}