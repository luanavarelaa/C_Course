#include <stdio.h>

#define NUM_TENTATIVAS   3

int main()
{
    printf("**********************************\n");
    printf("*Bem vindo ao jogo de adivinhacao*\n");
    printf("**********************************\n");

    int numero_secreto = 42;
    int chute;

    for (int i = 0; i < NUM_TENTATIVAS; i++)
    {
        printf("Qual e o seu %d chute?", i + 1);
        scanf("%d", &chute);

        int acertou = (chute == numero_secreto);
        int menor = chute < numero_secreto;
        int negativo = chute < 0;

        printf("Seu chute foi %d\n", chute);

        if (negativo)
        {
            printf ("Nao digite numeros negativos\n");
            i--;
            continue;
        }

        if (acertou)
        {
            printf("Parabens! Voce Acertou!\n");
            break;
        }
        else if (menor)
        {
            printf("O chute foi menor do que o numero secreto\n");
        }
        else 
        {
            printf("O chute foi maior do que o numero secreto\n");
        }
    
    }   
}

    

    

    

