#include <stdio.h>

int main() {

    float salarioBase, gratificacao, imposto, salarioReceber;

    printf("Informe seu salario base: \n");
    scanf("%f", &salarioBase);

    gratificacao = salarioBase * 0.05;
    imposto = salarioBase * 0.07;

    salarioReceber = salarioBase + gratificacao - imposto;

    printf("Salario Base: R$ %.2f\n", salarioBase);
    printf("Gratificacao(5%%): R$ %.2f\n", gratificacao);
    printf("Imposto(7%%): R$ %.2f\n", imposto);
    printf("Salario a receber: \n %2.f\n", salarioReceber);

}