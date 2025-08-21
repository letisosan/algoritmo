#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    printf("informe um numero\n");
    scanf("%d", &n1);
    printf("informe outro numero\n");
    scanf("%d", &n2);

    if(n1==n2){
        printf("os numeros sao iguais");
    }
    else {
        printf("os numeros nao sao iguais\n");
    }

    int val1, val2;
        printf("informe um numero\n");
        scanf("%d", &val1);
        printf("informe outro numero\n");
        scanf("%d", &val2);

        if(val1+val2>10){
            printf("eh maior que 10");
        }
        else{
            printf("nao eh maior que 10\n");
        }

        int num1, num2;
        printf("informe um numero\n");
        scanf("%d", &num1);
        printf("informe outro numero\n");
        scanf("%d", &num2);

        if(num1>num2){
            printf("entao mostre %d %d", num1, num2);
        }
        else{
            printf("entao mostre %d %d", num2, num1);
        }
    return 0;
}
