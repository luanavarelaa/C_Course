#include <stdio.h>

int main()
{
    printf("**********************************\n");
    printf("*Bem vindo ao jogo de adivinhacao*\n");
    printf("**********************************\n");

    int numero_secreto = 42;
    int chute;
    int i = 0;

    int errou = 0;

    while (errou == 0)
    {
        printf("Qual e o seu %d chute?", i+1);
        scanf("%d", &chute);

        int acertou = (chute == numero_secreto);
        int menor = chute < numero_secreto;
        int negativo = chute < 0;

        printf("\nSeu chute foi %d\n\n", chute);

        if (negativo)
        {
            printf ("Nao digite numeros negativos\n\n");
            continue;
        }

        if (acertou)
        {
            errou = 1;
        }

        else if (menor)
        {
            printf("O chute foi menor do que o numero secreto\n\n");
        }
        else 
        {
            printf("O chute foi maior do que o numero secreto\n\n");
        }

        i++;
    }
    printf ("Parabens! Voce acertou na %d tentativa", i);
}
    