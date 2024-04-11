#include <stdio.h>
#include <math.h>
#include <locale.h>

float distancia, x1, x2, t1, y2;

float dist_pontos(){

    printf("Digite as coordenadas do primeiro ponto: ");
    scanf("%f %f",&x1,&x2);
    printf("Digite as coordenadas do segundo ponto: ");
    scanf("%f %f",&t1, &y2);
    
    distancia = sqrt(pow(x1-t1,2)+pow(y2-x2,2));
    printf("A distancia entres os pontos eh: %f",distancia);

}

int main(){

    float dist_pontos();
    dist_pontos();

    return 0;
}