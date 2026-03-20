#include <stdio.h>

int main ()
{
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: \n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) /3;

    if (media >=7 && media <10)
    {
        printf("Passou");

    }   else if (media <7 && media >=3)
    {
        printf("Exame");

    }   else  if(media >0)
        printf("reprovado");
    
    

    return 0;
}
