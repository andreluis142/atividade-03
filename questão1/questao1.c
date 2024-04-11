#include <stdio.h>

int inverter(){

    int num, inverso;

    printf("Digite um numero inteiro entre 1000 e 999: ");
    scanf("%i",&num);

    do{
        
        inverso = num % 10;
        printf("%i", inverso);
        num /= 10;

    } while (num != 0);

}

int main(){

    int inverter();
    inverter();

    return 0;

}