#include <stdio.h>

int main () {
    float salarioBase, gratificacao, imposto, salarioAreceber;

    printf("Informe seu salario Base: \n");
    scanf("%f", &salarioBase);

    gratificacao = 50;
    imposto = salarioBase * 0.10;
    salarioAreceber = salarioBase + gratificacao - imposto;

    printf("Salario a Receber : R$ %.2f \n", salarioAreceber);


}