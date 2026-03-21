int main()
{
    float num1, num2;

    printf("Digite os numeros: \n");
    scanf("%f", &num1);
    scanf("%f", &num2);

    if (num1 >num2)
    {
        printf(" %.2f e o maior numero: \n ", num1);

    } else {

        printf(" %.2f e o maior numero: \n ", num2);
    
    }

    return 0;
}
