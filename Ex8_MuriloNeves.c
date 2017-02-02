#include <stdio.h>

int main(){

    int horas, minutos;

    printf("Digite um horario no formato 24hs");
    printf("Insira as horas");
    scanf(" %02d", &horas); // Para a impressão e leitura de duas casas númericas foi usado "%02d" em vez de "%d"
    printf("Insira os minutos");
    scanf(" %02d", &minutos);

    if (horas==0 || horas==24)
        printf(" %02d:%02d AM", 12, minutos);

    else if (horas>=1 && horas<=11)
        printf(" %02d:%02d AM", horas, minutos);

    else if (horas==12)
        printf(" %02d:%02d PM", horas, minutos);

    else if (horas>=13 && horas<=23)
        printf(" %02d:%02d PM", horas-12, minutos);


    return 0;
}
