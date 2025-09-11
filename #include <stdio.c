#include <stdio.h>
typedef struct dados
{
	char nome[30];
	int peso, idade;
	float altura, imc;
} dados;
int main()
{
	dados pessoa;

	printf("Digite o nome da pessoa: ");
	gets(pessoa.nome);
	fflush(stdin);

	printf("Digite a idade da pessoa: ");
	scanf("%i", &pessoa.idade);

	printf("Digite o peso da pessoa: ");
	scanf("%i", &pessoa.peso);

	printf("Digite a altura da pessoa: ");
	scanf("%f", &pessoa.altura);

	pessoa.imc = pessoa.peso / (pessoa.altura * pessoa.altura);

	printf("\nNome digitado: %s", pessoa.nome);

	printf("\npeso digitado: %i", pessoa.peso);

	printf("\naltura digitado: %.2f", pessoa.altura);

	printf("\nIdade digitada: %i", pessoa.idade);

	printf("\nSeu IMC é: %f", pessoa.imc);
	// qual classificação a pessoa esta
	if (pessoa.imc < 20){
      	printf("\nVoce esta abaixo do peso");
	}
	else if (20 <= pessoa.imc <= 24.9){
		printf("\nVoce esta no peso normal");
	}
		else if (25<pessoa.imc<+29.9){
			printf("\nVoce possui obesidade moderada");
		}
		else if(30<pessoa.imc<=39.9){
			printf("\nVoce possui obesidade moderada");
		}
		else if (pessoa.imc>40){
			printf("\nVoce possui obesidade morbida");
		}

}