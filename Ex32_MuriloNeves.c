#include <stdio.h>
#include <stdlib.h>



int main()
{
    int qtdLinha,i,j;
    printf("Digite a quantidade de linhas");
    scanf("%d",&qtdLinha);

    int vogal[qtdLinha];
    char linha[qtdLinha][80], maiorVogal[qtdLinha][80];

    for(i=0;i<qtdLinha;i++){

        printf("Digita ai\n");
        fflush(stdin);
        gets(linha[i]);
    }

    for(i=0;i<qtdLinha;i++){
        vogal[i]=0;

        if(i==0){
             for(j=0;j<strlen(linha[i]);j++){
                if(linha[i][j]==97 || linha[i][j]==101 || linha[i][j]==105 || linha[i][j]==111 || linha[i][j]==117 || linha[i][j]==65 || linha[i][j]==69 || linha[i][j]==73 || linha[i][j]==79 || linha[i][j]==85){
                    vogal[i]++;
                    printf("%d",vogal[i]);
                    for(j=0;j<strlen(linha[i]);j++){
                        maiorVogal[i][j]=linha[i][j];
            }
                }
             }
        }

        else if(i>0){
            for(j=0;j<strlen(linha[i]);j++){
                if(linha[i][j]==97 || linha[i][j]==101 || linha[i][j]==105 || linha[i][j]==111 || linha[i][j]==117 || linha[i][j]==65 || linha[i][j]==69 || linha[i][j]==73 || linha[i][j]==79 || linha[i][j]==85)
                    vogal[i]++;
            }


            if(vogal[i]>vogal[i+1]){
                printf("%d",vogal[i]);
                for(j=0;j<strlen(linha[i]);j++){
                    maiorVogal[i][j]=linha[i][j];

            }
        }
        }
    }



    fflush(stdin);
    puts(maiorVogal);



    return 0;
}
