#include <stdio.h>

int main() {

    float notaLab, notaAva, notaExame, media;

    printf("Digite as notas do aluno: \n");
    scanf("%f", &notaLab);
    scanf("%f", &notaAva);
    scanf("%f", &notaExame);

    media = (notaLab *2) + (notaAva *3) + (notaExame *5) /10;

    if (media >= 8 && media <=10)
    {
        printf("Conceito A");
    }else if (media >=7 && media <7,99)
    {
        printf("Conceito B");

    }else if (media >=6 && media <7)
    {
        printf("Conceito C");

    }else if (media >=5 && media <6)
    {
        printf("Conceito D");

    }else if (media <5)
    {
        printf("Conceito E");
    }
    

    
    
    
    

    return 0;
}