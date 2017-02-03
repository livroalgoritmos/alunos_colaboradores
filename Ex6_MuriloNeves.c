#include <stdio.h>

int main(){

    int primeiro, segundo, terceiro, maior, menor, intermediario;

    printf(" Digite o primeiro numero");
    scanf(" %d",&primeiro);
    printf(" Digite o segundo numero");
    scanf(" %d",&segundo);
    printf(" Digite o terceiro numero");
    scanf(" %d",&terceiro);

    if( primeiro<segundo && segundo<terceiro){
        menor=primeiro;
        intermediario=segundo;
        maior=terceiro;
    }
    else if(primeiro<terceiro && terceiro<segundo){
        menor=primeiro;
        intermediario=terceiro;
        maior=segundo;
    }
    else if(segundo<primeiro && primeiro<terceiro){
        menor=segundo;
        intermediario=primeiro;
        maior= terceiro;
    }
    else if (segundo<terceiro && terceiro<primeiro){
        menor=segundo;
        intermediario=terceiro;
        maior=primeiro;
    }
    else if(terceiro<primeiro && primeiro<segundo){
        menor=terceiro;
        intermediario=primeiro;
        maior=segundo;
    }
    else if (terceiro<segundo && segundo<primeiro){
        menor=terceiro;
        intermediario=segundo;
        maior=primeiro;
    }

    printf(" %d", intermediario);
    return 0;
}
