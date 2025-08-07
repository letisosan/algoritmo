#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a;
    int b;
    int soma;
    int subtracao;
    int divisao;
    int multiplicacao;
    int resto;

    printf("informe um numero\n");
    scanf("%d", &a);
    printf("informe outro numero\n");
    scanf("%d", &b);
    soma = a + b;
    printf("a soma desses numeros eh:%d\n", soma);

    subtracao=a-b;
    printf("a subtracao desses numeros eh:%d\n", subtracao);

    divisao=a/b;
    printf("a divisao desses numeros eh:%d\n", divisao);

    multiplicacao=a*b;
    printf("a multiplicacao desses numeros eh:%d\n", multiplicacao);

    resto=a%b;
    printf("o resto desses numeros eh:%d\n", resto);




    return 0;
}
