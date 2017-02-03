#include <stdio.h>


int main(){

    int i,palavras=0;
    char sequencia[100],espaco=32, enter=10;



    printf("Digite um texto");
    gets(sequencia);


    for(i=0;i<100;i++){
        if(sequencia[i]==espaco || sequencia[i+1]==enter)
            palavras++;
    }

    printf("Palavras: %d", palavras);

    return 0;
}
