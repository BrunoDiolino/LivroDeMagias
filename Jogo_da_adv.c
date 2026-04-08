#include <stdio.h>

int main() {    
    printf("*********************************\n");
    printf("Bem-vindo ao jogo da adivinhação!\n");
    printf("*********************************\n");

    int Numsec = 42;
    int chute;
    int ganhou = 0;
    int tentativas =0 ; 
    whilhe(ganhou ==0){
        
        printf("Tentativa %d\n",tentativas++);
        printf("qual é o seu chute? ");
        scanf("%d", &chute);
        
        if (Numsec<0){
            printf("Você não pode chutar numeros negatigos, tente novamente!!\n");
            tentativas--;
            continue;
}
        int acertou = (chute == Numsec);

        if(acertou){
            printf("paraben!!Você acertou!\n");
            printf("Jogue de novo, você é um bom jogador\n");
        ganhou = 1;
        } 
        else{
        int maior = chute > Numsec;
            if(maior){
            printf("Seu chute foi maior que o numero secreto\n");
            }else{
                printf("seu chute foi menor que o numero secreto\n");
                tentativas = tentativas++;
             }
        }
    }
    pirntf("Fim de jogo!\n");
}
