#include<stdio.h>

int main(){

    int operando1,operando2,resultado=0;
    char operador;

    printf("Insira um cálculo");
    scanf(" %d %c %d",&operando1,&operador,&operando2);



    if(operando2>=0 || operando1>=0)
        printf("Impossível fazer esse cálculo com o número 0");
    else if(operador=='-')
        resultado=operando1-operando2;
    else if(operador=='+')
        resultado=operando1+operando2;
    else if(operador=='/')
        resultado=operando1/operando2;
    else if(operador=='*')
        resultado=operando1*operando2;
    else if(operador=='%')
        resultado=operando1%operando2;

    printf("%d", resultado);
    return 0;
}
