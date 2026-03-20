#include <stdio.h>

int main() {

float nota1, nota2, nota3, mediaAri;

    printf("Adicione nota1:\n");
    scanf("%f", &nota1);

    printf("Adicione nota2:\n");
    scanf("%f", &nota2);

    printf("Adicione nota3:\n");
    scanf("%f", &nota3);

    mediaAri = (nota1 + nota2 + nota3) /3;

    printf("A media aritmetica e: %f \n", mediaAri);



}