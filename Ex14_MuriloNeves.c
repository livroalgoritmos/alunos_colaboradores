#include <stdio.h>

int main(){

    int x,y,i,resultado;

    printf("Digite o primeiro numero");
    scanf(" %d",&x);
    printf("Digite o segundo numero");
    scanf(" %d",&y);

    for(i=0; i<y; i++){
        if (i==0){
            resultado=x;
        }
        else{
            resultado= resultado*x;
        }
    }
    printf(" %d", resultado);
    return 0;
}
