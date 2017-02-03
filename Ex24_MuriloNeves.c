#include<stdio.h>

int main(){

    int i;
    int asciiNumero=97;
    char ascii=97;

    for(i=0;i<=25;i++){
        printf(" %c : %d\n",ascii,asciiNumero);
        ascii++;
        asciiNumero++;
    }

    return 0;
}
