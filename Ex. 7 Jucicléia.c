/*7) Faça um programa que leia 3 números e imprima uma das seguintes mensagens:
 todos os números são iguais;
 todos os números são diferentes ou
 apenas dois números são iguais.*/

#include<stdio.h>

main(){
	int n1, n2, n3;

	printf("\nDigite um nr: ");
	scanf("%d", &n1);
	printf("\nDigite um nr: ");
	scanf("%d", &n2);
    printf("\nDigite um nr: ");
	scanf("%d", &n3);
	if((n1==n2)&&(n2==n3)){
        printf("Todos os numeros sao iguais");
	}
	else if((n1!=n2)&&(n2!=n3)){
        printf("Todos os numeros sao diferentes");
	}
    else if((n1==n2)||(n1==n3)||(n2==n3)){
        printf("Apenas dois numeros sao iguais");
	}
}
