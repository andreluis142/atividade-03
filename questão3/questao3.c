#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    srand(time(NULL));

    int i, random, cara = 0, coroa = 0;
    
    for (i = 0; i < 100; i++) {
        random = rand() % 2;
        if (random == 1)
        {    
            cara++;
        }
        else
        {
            coroa++;
        }
        
        printf("%d ", random);
    }

    printf("\n");
    printf("A moeda deu cara: %d vezes \n",cara);

    printf("A moeda deu coroa: %d vezes\n",coroa);
    return 0;
}