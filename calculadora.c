#include <stdio.h>
#include <stdlib.h>

//menu
//soma
//subtração
//raiz quadrada
//eleva ao quadrado
//eleva a x
//divisão
//multiplicação
//porcentagem
//retorna pi
//inverso (1/x)
//fatorial
//retorna exp
//seno
//cosseno
//tangent
//fibonacci
//média de n elementos

#include<stdio.h>
#include<stdlib.h>


void menu (){
printf("Escolha uma opção: \n");
printf("1-soma\n2-subtração\n3-raiz quadrada\n0-sair");
}

float soma(float a, float b){

float soma;
soma = a+b;
return soma;
printf("A soma é :%f",&soma)

}

float subtracao(float a, float b){

float sub;
sub = a+b;
printf("A soma é :%f",&sub);
return sub;

}

float raizquad(float a){
	return sqrt(a);	
}

int main(){
int p;
menu();

do{
switch(p){
	case 1:
	soma();
	break;
	case 2:
	subtracao();
	break;
	case 3:
	raizquad();
	break;
	default:
	printf("copera ne man");
}}while(p!=0);
return 0;
}
