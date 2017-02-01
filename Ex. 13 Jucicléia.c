/*13) Faça um programa que leia um número da entrada, calcule e imprima o seu fatorial. Lembrese
que:
n! = n x (n -1) x (n - 2) x ... x
1
0! = 1 e 1! = 1*/

#include<stdio.h>

int fat(int n){ //funcao recursiva
	if((n==0)||(n==1))
		return 1;

	else
		return (n*fat(n-1));
}

main(){
	int n;
	printf("\nDigite um nr: ");
	scanf("%d", &n);
	printf("O fatorial de %d eh %d",n, fat(n));
}
