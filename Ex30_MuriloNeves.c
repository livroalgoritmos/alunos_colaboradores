#include <stdio.h>

int conversor(char *caracter[2]){

    int retorno=0;

    if(caracter>=97 && caracter<=122){
        *caracter=*caracter-32;
        retorno=1;
    }
    else if (caracter>=65 && caracter<=90)
        retorno=1;

        return retorno;

}

int main(){

    char caracter[2];
    int aux;

    printf("Insira um caracter");
    scanf("%c",&caracter[2]);

    aux=conversor(&caracter);

    if(aux==1)
        printf("%c",caracter);
    else if (aux==0)
        printf("Não é uma letra");

    return 0;
}
