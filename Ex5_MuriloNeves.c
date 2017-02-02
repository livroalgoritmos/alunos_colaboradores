#include <stdio.h>

int main(){

    int primeiro, segundo, terceiro;

    printf("Digite o primeiro numero");
    scanf(" %d", &primeiro);

    printf("Digite o segundo numero");
    scanf(" %d",&segundo);

    printf("Digite o terceiro numero");
    scanf(" %d",&terceiro);

    if(primeiro<=segundo && segundo<=terceiro)
        printf(" %d, %d, %d", terceiro, segundo, primeiro);

    else if(segundo<=primeiro && primeiro<=terceiro)
        printf(" %d, %d, %d", terceiro, primeiro, segundo);

    else if (terceiro<=primeiro && primeiro<=segundo)
        printf( "%d, %d, %d", segundo, primeiro, terceiro);

    else if (primeiro<=terceiro && terceiro<=segundo)
        printf(" %d, %d, %d", segundo, terceiro, primeiro);

    else if (terceiro<=segundo && segundo<=primeiro)
        printf(" %d, %d, %d", primeiro, segundo, terceiro);

    else if(segundo<=terceiro && terceiro<=primeiro)
        printf(" %d, %d, %d", primeiro, terceiro, segundo);

    return 0;

}
