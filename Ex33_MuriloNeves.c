#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10],contador,i;

    for(i=0;i<10;i++){
        printf("Digite um valor");
        scanf("%d",&vetor[i]);
    }
    contador=0;

    for(i=0;i<10;i++){
        if(vetor[i]==vetor[9])
            contador++;
    }

    printf("O último número aparece %d vezes",contador);
    return 0;
}
