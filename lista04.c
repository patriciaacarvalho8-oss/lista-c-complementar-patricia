#include <stdio.h>

int main() {
    float valor, novoValor;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    novoValor = valor * 1.15;

    printf("O valor com acréscimo de 15%% é: %.2f\n", novoValor);

    return 0;
}