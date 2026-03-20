#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, elevado;

    printf("Insira dois numeros maiores que zero: \n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    
    elevado = pow(num1, num2);

    printf("A elevacao: \n %.2f", elevado);

}