#include <stdio.h>
#include <locale.h>

int main() {
  // Configura o locale para portugu�s
  setlocale(LC_ALL, "Portuguese");

  // Declara��o de vari�veis
  int numero;

  // Entrada de dados
  printf("Digite um n�mero inteiro: ");
  scanf("%d", &numero);

  // Processamento e sa�da de dados
  if (numero % 2 == 0) {
    printf("O n�mero %d � par.\n", numero);
  } else {
    printf("O n�mero %d � �mpar.\n", numero);
  }

  return 0;
}