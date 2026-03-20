#include <stdio.h>

int main() {

    float raio, area;

    printf("insira o valor do raio do circulo: \n");
    scanf("%f", &raio);

    area = 3.1415 * raio * raio;

    printf("A area do circulo e: \n %.2f", area);

    return 0;
}