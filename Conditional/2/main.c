#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Escreva um programa em que uma variável recebe um valor lido entre 20 e 100. Imprima na tela o valor gerado, caso seja divisível por 3 e por 5.

int main(void) {

  srand(time(NULL));

  int Random = 20 + rand() % 81;

  if(Random % 3 == 0 && Random % 5 == 0){
    printf("%i", Random);
  }


  return 0;
}