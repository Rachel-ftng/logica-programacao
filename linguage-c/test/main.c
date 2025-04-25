#include <stdio.h>
#include <locale.h>

int main() {
  // Configura o locale para português
  setlocale(LC_ALL, "Portuguese");

  // Declaração de variáveis
  int numero;

  // Entrada de dados
  printf("Digite um número inteiro: ");
  scanf("%d", &numero);

  // Processamento e saída de dados
  if (numero % 2 == 0) {
    printf("O número %d é par.\n", numero);
  } else {
    printf("O número %d é ímpar.\n", numero);
  }

  return 0;
}