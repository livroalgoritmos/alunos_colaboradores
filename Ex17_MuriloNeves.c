#include <stdio.h>

int main(){

    int nmrPedido, quantidade;
    float  preco, valorTotal;
    char data[11];


    valorTotal=0;
    while(nmrPedido!=0){
        printf("Digite o número do pedido");
        scanf("%d",&nmrPedido);

        if(nmrPedido==0)
            break;



        else{
        printf("Digite a data do pedido");
        fflush(stdin);
        gets(data);

        printf("Digite o preço unitário do item");
        scanf("%f",&preco);

        printf("Digite a quantidade");
        scanf("%d",&quantidade);

        valorTotal+= preco*quantidade;
        }

    }

    printf("O valor total é: %f", valorTotal);


    return 0;
}
