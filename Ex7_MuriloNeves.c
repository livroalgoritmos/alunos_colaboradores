#include <stdio.h>

int main(){

    int primeiro, segundo, terceiro;

    printf(" Digite o primeiro numero");
    scanf(" %d",&primeiro);
    printf(" Digite o segundo numero");
    scanf(" %d",&segundo);
    printf(" Digite o terceiro numero");
    scanf(" %d",&terceiro);

    if(primeiro==segundo && segundo==terceiro)
        printf("Todos os n�meros s�o iguais");
    else if(primeiro==segundo || segundo==terceiro || primeiro==terceiro)
        printf("Apenas dois n�meros s�o iguais");
    else
        printf("Todos os n�meros s�o diferentes");

    return 0;
}
