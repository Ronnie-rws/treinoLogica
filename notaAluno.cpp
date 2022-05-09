#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	float nota1,nota2,nota3,nota4;
	float media = 0;
	
	printf("\nDigite a primeira nota: ");
	scanf("%f",&nota1);
	
	printf("\nDigite a segunda nota: ");
	scanf("%f",&nota2);
	
	printf("\nDigite a terceira nota: ");
	scanf("%f",&nota3);
	
	printf("\nDigite a quarta nota: ");
	scanf("%f",&nota4);
	
	media = (nota1 + nota2 + nota3 + nota4)/4;
	
	if(media >= 70){
		
		printf("\nAluno aprovado com média %.2f: ",media);
		
	}else{
		
		printf("\nAluno reprovado com média %.2f: ",media);
	}
	
	
	
	return 0;
}
