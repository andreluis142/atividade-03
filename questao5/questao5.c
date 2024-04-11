#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gerarnum()
{
    return rand() % 1000 + 1;
}

int jogoadivinhar(int num_aleatorio)
{
    int tentativa;
    

    do
    {   
        printf("Adivinhe o numero entre 1 e 1000: \n");
        scanf("%d",&tentativa);

        if (tentativa == num_aleatorio)
        {
            printf("Voce acertou!\n");
        }
        else if(tentativa < num_aleatorio)
        {
            printf("Muito baixo. Tente denovo!\n");
        }
        else
        {
            printf("Muito alto. Tente denovo!");         
        }
        
    }while (tentativa != num_aleatorio);
}

int main()
{
    int numero_secreto;
    srand(time(NULL));

    numero_secreto = gerarnum();
    jogoadivinhar(numero_secreto);
    return 0;
}