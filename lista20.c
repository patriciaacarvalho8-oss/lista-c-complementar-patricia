#include <stdio.h>
#include <stdlib.h>

int main() {

    char nome[100];
    int i, contador = 0;

    printf("Digite seu nome completo: ");
    fgets(nome, 100, stdin);  

    for (i = 0; nome[i] != '\0'; i++) {
        if (nome[i] != ' ' && nome[i] != '\n') {  
            contador++; 
        }
    }

    printf("Seu nome tem o total de %d letras (sem contar os espaços).\n", contador);

    system("pause");
    return 0;
} 