#include <stdio.h>

int main(){

    int num,i,resultado;

    printf("Digite um número");
    scanf("%d", &num);

    for(i=1; i<=num*2; i++){
        resultado=i%2;
        if(resultado==0)
            printf(" %d", i);
    }

    return 0;
}
