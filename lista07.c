#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){
  setlocale(LC_ALL, "Portuguese");

  int i, n;

  printf("informe um numero para tabuada: ");
  scanf("%d", &n);

  printf("\nT A B U A D A");
  printf("\n==============");

  for (int i = 0; i <= 10; i++) {
        printf("%2d - %d = %d\n", n, i, n - i);
    }

  printf("\n==============");

  system("pause");

}