#include <stdio.h>
#include <math.h>

int main()
{

   double num, quadrado, cubo;

   printf("informe um numero:\n");
   scanf("%lf", &num);

   quadrado = pow (num, 2);
   cubo = pow (num, 3);

   printf("o valor do cubo eh: %.2lf\n", cubo);
   printf("o valor do quadrado eh: %.2lf\n", quadrado);


   double num1, num2;
   printf("informe um numero:\n");
   scanf("%lf", &num1);
   printf("informe outro numero:\n");
   scanf("%lf", &num2);

   double aux, raiz;

   aux = num1 * num2;

   raiz = sqrt (aux);

   printf("a raiz quadrada da multiplicação desses numeros eh:%.2lf\n", raiz);

   return 0;

}
