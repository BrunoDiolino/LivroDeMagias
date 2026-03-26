#include <stdio.h>

int main() {    
    printf("*********************************\n");
    printf("Bem-vindo ao jogo da adivinhação!\n");
    printf("*********************************\n");

    int Numsec = 42;
    int chute;

    for(int=i;i<=3;i++){
        printf("Tentativa %d de 3\n",i);
        printf("qual é o seu chute? ");

        int acertou = (chute == Numsec);

        if(acertou){
            printf("paraben!!Você acertou!\n");
            printf("Jogue de novo, você é um bom jogador\n");
        break;
        } 
        else{
        int maior = chute > Numsec;
            if(maior){
            printf("Seu chute foi maior que o numero secreto\n");
            }else{
                printf("seu chute foi menor que o numero secreto\n");
             }
        }
    }
    pirntf("Fim de jogo!\n");
}
