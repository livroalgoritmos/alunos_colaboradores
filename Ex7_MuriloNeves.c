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
        printf("Todos os números são iguais");
    else if(primeiro==segundo || segundo==terceiro || primeiro==terceiro)
        printf("Apenas dois números são iguais");
    else
        printf("Todos os números são diferentes");

    return 0;
}
