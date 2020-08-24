#include <stdio.h>  
#include <stdlib.h>
#include <time.h>

//Elaborar um programa em linguagem C para somar dois números inteiros e mostrar o valor da soma na tela. Você só deve imprimir a mensagem se a soma dos números for maior que 10.

int main(void) {
  
  srand(time(NULL));

  int NumberOne = rand() % 11;
  int NumberTwo = rand() % 11;
  int Total;

  Total = NumberOne + NumberTwo;

  if(Total > 10){
    printf("A soma entre %i e %i é igual a %i",NumberOne, NumberTwo, Total);
  }
  
  return 0;
}