#include <stdio.h>

int main()
{
    float lado, area;
    
    printf("De o valor do lado do quadrado: \n");
    scanf("%f", &lado);
    
    area = lado * lado;
    
    printf("A area do quadrado e: %.2f \n", area);
    
    return 0;
}
