#include <stdio.h>


int main()
{
    int i, contador1=0, contador2=0, contador3=0;
    float precoCompra, precoVenda, lucro;

    for(i=0; i<100; i++){

        printf("Insira o pre�o de compra da mercadoria \n");
        scanf(" %d", &precoCompra);
        printf("Insira o pre�o de venda da mercadoria \n");
        scanf(" %d", &precoVenda);

        lucro= ((precoVenda-precoCompra)*100)/precoCompra;
        // Primeiro � feito a diferen�a dos pre�os para ap�s calcular a porcentagem por uma regra de tr�s

        if (lucro<10){
            contador1++;
        }
        else if (lucro>= 10 && lucro<=20){
            contador2++;
        }
        else if (lucro>20){
            contador3++;
        }

    }

    printf(" %d mercadorias possuem lucro abaixo de 10%% \n", contador1);
    printf(" %d mercadorias possuem lucro entre 10%% e 20%% \n", contador2);
    printf(" %d mercadorias possuem lucro acima 10%% \n", contador3);

    return 0;
}
