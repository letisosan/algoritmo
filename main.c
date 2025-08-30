#include <stdio.h>
#include <stdlib.h>

int main()
{


   int cont = 1, num, maior, menor;
   printf("informe o primeiro numero:\n");
   scanf("%d", &num);
   maior = num;
   menor = num;

   while (cont <= 9) {
        printf("informe %d numero\n", cont);
        scanf("%d", &num);
   if (num > maior) {
        maior = num;
   }
   else if (num < menor) {
        menor = num;
   }
    cont++;
   }

   printf("o maior eh: %d\n", maior);
   printf("o menor eh: %d\n", menor);

   return 0;
   }
