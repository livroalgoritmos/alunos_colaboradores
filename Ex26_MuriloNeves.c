#include <stdio.h>

int main(){

    int i;
    char mensagem[100];

    printf("Digite uma mensagem");
    fflush(stdin);
    gets(mensagem);

    for(i=0;i<100;i++){

        if(mensagem[i]==80)
            mensagem[i]=90;
        else if(mensagem[i]==90)
            mensagem[i]=80;
        else if (mensagem[i]==112)
            mensagem[i]=122;
        else if (mensagem[i]==122)
            mensagem[i]=112;
        else if (mensagem[i]==69)
            mensagem[i]=79;
        else if (mensagem[i]==79)
            mensagem[i]=69;
        else if (mensagem[i]==101)
            mensagem[i]=111;
        else if (mensagem[i]==111)
            mensagem[i]=101;
    }

    fflush(stdin);
    puts(mensagem);
    return 0;
}
