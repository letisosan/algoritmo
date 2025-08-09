#include <stdio.h>
#include <stdlib.h>

int main()
{
    double raio;
    double area;
    double peri;
    double pi;

    printf("informe o valor do raio do circulo:\n");
    scanf("%lf", &raio);

    pi = 3.14159;
    area = pi * raio * raio;

    printf("o valor da area eh:%2.lf\n", area);

    peri = 2 * pi * raio;

    printf("o valor do perimetro eh: %2.lf\n", peri);

    int idade;
    int dias;
    int vividos;

    printf("informe a sua idade:\n");
    scanf("%d", &idade);

    dias = 365;

    vividos = idade * dias;
    printf("voce viu essa quantidade de dias:%d\n", vividos);

    int num1;
    double porc;

    printf("informe um numero:\n");
    scanf("%d", &num1);

    porc = num1 * 0.04;
    printf("esse numero mais 4pc eh:%2.lf\n", porc);



   int nota1;
   int nota2;
   int nota3;

   printf("informe a primeira nota\n");
   scanf("%d", &nota1);
   printf("informe a segunda nota\n");
   scanf("%d", &nota2);
   printf("informe a terceira nota\n");
   scanf("%d", &nota3);

   nota1 = nota1*0.2;
   nota2 = nota2*0.3;
   nota3 = nota3*0.5;

   int media = nota1 + nota2 + nota3;

   printf("a media final eh: %d \n", media);

   int dist;
   int temp;

   printf("informe a distancia percorrida\n");
   scanf("%d", &dist);

   printf("informe o tempo:\n");
   scanf("%d", &temp);

   int vm = dist / temp;
   printf("a velocidade media eh:%d\n", vm);




    return 0;
}
