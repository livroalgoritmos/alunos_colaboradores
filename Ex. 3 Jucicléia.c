/*3) Faça um programa que leia um número da entrada e imprima o seu antecedente e o seu sucessor.*/

#include<stdio.h>

main(){
	int n, ant, suc;

	printf("\nDigite um nr: ");
	scanf("%d", &n);

	ant= n-1;
	suc= n+1;
	printf("\n\nO numero digitado foi %d \nSeu antecessor eh %d e seu sucessor eh %d!\n\n", n, ant, suc);
}
