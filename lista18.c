#include <stdio.h>

int main() {
    float dolar, cotacao, real;

    printf("Digite o valor em dolar: ");
    scanf("%f", &dolar);

    printf("Digite a cotacao atual do dolar: ");
    scanf("%f", &cotacao);

    real = dolar * cotacao;

    printf("Valor em reais: R$ %.2f\n", real);

    return 0;
}