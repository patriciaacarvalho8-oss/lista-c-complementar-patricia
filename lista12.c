#include <stdio.h>
#include <stdlib.h>

int main() {

    float raio, circunferencia;
    const float PI = 3.14159;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    circunferencia = 2 * PI * raio;

    printf("O comprimento da circunferencia e: %.2f\n", circunferencia);

    system("pause");
    return 0;
}