#include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero");
    scanf(" %d", &numero);
    printf(" O antecessor desse numero e %d, seu sucessor e %d.", numero-1, numero+1);
    return 0;
}
