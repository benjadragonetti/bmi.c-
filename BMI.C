#include <stdio.h>

int main() {
    float peso;
    float altura;
    float calculo;

    do {
        printf("Introduzca su peso en kg: ");
        scanf("%f", &peso);
        if (peso <= 0) {
            printf("¡Error! El peso no puede ser negativo o cero. Por favor, ingrese un valor positivo.\n");
        }
    } while (peso <= 0);

    do {
        printf("Introduzca su altura en m: ");
        scanf("%f", &altura);
        if (altura <= 0) {
            printf("¡Error! La altura no puede ser negativa o cero. Por favor, ingrese un valor positivo.\n");
        }
    } while (altura <= 0);

    calculo = peso / (altura * altura);

    printf("Su IMC es: %.2f\n", calculo);

    printf("Índice| Condición\n");
    printf("-----------------------------\n");
    printf("<18.5 | Bajo peso\n");
    printf("18.5 a 24.9 | Normal\n");
    printf("25.0 a 29.9 | Sobrepeso\n");
    printf(">=30 | Obesidad\n");

    return 0;
}
