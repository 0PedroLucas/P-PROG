//fa�a enquanto o usuario n�o digitar o valor 8
//jogo de adivinha��o
//a cada la�o, pergunatr para o usuario:"qual o numero oculto"
//caso o 8 seja digitado, o loop para, e na tela ira aparecer "parab�ns voc� encontrou o n�mero oculto"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include <time.h>



int main(){
	srand(time(NULL));
	setlocale(LC_ALL,"portuguese");
	int op=0, Noculto=(rand() %50) + 1, ntentativas, conttentativas=0, intervalo, palpite;
	printf("Escreva o numero de tentativas desejadas 0-10: ");
	scanf("%i", &ntentativas);
	while(op!=Noculto && conttentativas<ntentativas){
		printf("qual o seu n�mero oculto: ");
		scanf("%i", &op);
		conttentativas++;
		intervalo = Noculto - palpite;
		if(intervalo<0)intervalo=intervalo*-1;
		if(intervalo>=20) printf("\n ta frio");
		if(intervalo>=10 && intervalo<20) printf("\nta morno");
		if(intervalo>=5 && intervalo<10) printf("\n ta quente");
		}
		printf("Noculto: %i", Noculto);
		if(op==Noculto)printf("\n!!!!!!!!!!!BRUTAL!!!!!!!!!!!");
		else printf("\nHAHAHAHAHAHAHAHA n�o deu pro betinha, foi mogado");
		
}
