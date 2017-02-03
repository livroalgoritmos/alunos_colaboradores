#include <stdio.h>

#include <stdlib.h>


void inverte(int vetor[], int tamanho){

    int i,j,vetorAux[tamanho];

    j=0;
    for(i=tamanho-1;i>=0;i--){
        vetorAux[i]=vetor[j];
        j++;
    }

    for(i=0;i<tamanho;i++){
        vetor[i]=vetorAux[i];

    }




}

int main()
{

    int i,tamanho;
    printf("Digite o tamanho do vetor");
    scanf("%d",&tamanho);

    int vetor[tamanho];
    for(i=0;i<tamanho;i++){
        printf("Digite um valor");
        scanf("%d",&vetor[i]);
    }

    inverte(vetor,tamanho);

    for(i=0;i<tamanho;i++){
        printf("%d\n",vetor[i]);
    }
    return 0;
}
