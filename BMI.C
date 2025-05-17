#include <stdio.h>

float peso;
float altura;
float calculo;
int main()
{
    printf("Introduzca su peso en kg:");

    scanf("%f", &peso);

printf("Introduzca su altura en m:");

    scanf("%f", &altura);
    
calculo = peso / (altura * altura);

printf("Su imc es:%.2f\n", calculo );


printf("Índice| Condición");
printf ("-----------------------------\n");
printf ("<18.5 | Bajo peso\n");
printf("18.5 a 24.9 | Normal\n");
printf ("25.0 a 29.9 | Sobrepeso\n");
printf (">=30| Obesidad");

return 0;
}
