#include <stdio.h>
#include <stdlib.h>

int main()
{

     int n1;
    int n2;

    printf("informe um numero:\n");
    scanf("%d", &n1);
    printf("informe outro numero:\n");
    scanf("%d", &n2);


    if (n1%2==0 && n2%2==0) {
        printf("os numeros sao pares");
    }
    else if (n1%2==0 || n2%2==0) {
        printf("um eh par");
            }
    else {
        printf("nao sao pares\n");
    }


    double altura, peso;
    char sexo;

    printf("informe a sua altura em metros:\n");
    scanf("%lf", &altura);
    printf("informe o seu sexo:\n");
    scanf(" %c", &sexo);

    if(sexo == 'm' || sexo == 'M'){
        peso = (72.7 * altura) -58;
        printf("peso ideal: %.2lf\n", peso);
    }
    else if(sexo == 'f' || sexo == 'F'){
        peso = (62.1 * altura) - 44.7;
        printf("peso ideal: %.2lf\n");
    }
    else {
        printf("opcao invalida!!!!");
    }

    return 0;
}

