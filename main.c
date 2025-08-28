#include <stdio.h>
#include <math.h>

int main()
{

    char conceito;
    printf("informe o conceito do aluno:\n");
    scanf("%c", &conceito);

    switch (conceito) {
        case 'A': {
        printf("excelente\n");
        break;
        }
        case 'B': {
        printf("bom\n");
        break;
        }
        case 'C': {
        printf("regular\n");
        break;
        }
        case 'D': {
        printf("reprovado");
        break;
        }
        default: {
        printf("opcao invalida");
        }
    }

    return 0;
}
