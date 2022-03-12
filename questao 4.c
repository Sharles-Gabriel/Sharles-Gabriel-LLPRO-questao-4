#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese_Brazil");
  
  int raio, volume;
  
  printf("Calculo do raio de uma esfera\n");
  printf("_____________________________\n");
  
  printf("\nDigite o valor do raio de uma esfera:");
  scanf("%d", &raio);
  
  volume = 4/3 * (raio * raio * raio);
  
  printf("O volume do raio de uma esfera é: %d", volume);
}