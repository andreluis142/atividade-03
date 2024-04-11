#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rolardado() {
    return(rand() % 6) +1;
}

int main() {

    srand(time(NULL));
    
    int soma_dados, pontos, dado1, dado2;
    char jogar_dnv;

    do
    {
        printf("Aperte enter para jogar os dados!\n");
        getchar();

        dado1 = rolardado();
        dado2 = rolardado();
        soma_dados = dado1 + dado2;

        printf("Pontos na rodada: %d + %d = %d\n", dado1,  dado2, soma_dados);

        if(soma_dados == 7 || soma_dados == 11)
        {
           printf("Voce ganhou!\n");
        }
        else if(soma_dados == 2 || soma_dados == 3 || soma_dados == 12)
        {
            printf("Voce perdeu!\n");

        }
        else
        {
            pontos = soma_dados;
            
            do
            {
                printf("Aperter enter para jogar os dados!\n");
                getchar();

                dado1 = rolardado();
                dado2 = rolardado();

                soma_dados = dado1 + dado2;

                printf("Pontos na rodada: %d + %d = %d \n", dado1,  dado2, soma_dados);

                if (soma_dados == pontos)
                {
                    printf("Voce ganhou!\n");
                }
                else if (soma_dados == 7)
                {
                    printf("Voce perdeu!\n");
                }
                
            } while (soma_dados != pontos && soma_dados  != 7);

            
        }

        printf("jogar denovo? (s/n): \n");
        scanf("%c",&jogar_dnv);

    } while (jogar_dnv == 's' || jogar_dnv == 'n');

    printf("Aperte enter para encerrar jogo!");

    return 0;
}