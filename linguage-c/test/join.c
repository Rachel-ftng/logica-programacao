#include <stdio.h>
#include <string.h>
#include <locale.h>

void join(char *resultado, const char *str1, const char *str2, const char *delimitador) {
  strcpy(resultado, str1);
  strcat(resultado, delimitador);
  strcat(resultado, str2);
}

int main() {
  setlocale(LC_ALL, "Portuguese");

  char str1[50], str2[50], delimitador[10], resultado[110];

  printf("Digite a primeira string: ");
  scanf("%49s", str1);

  printf("Digite a segunda string: ");
  scanf("%49s", str2);

  printf("Digite o delimitador: ");
  scanf("%9s", delimitador);

  join(resultado, str1, str2, delimitador);

  printf("Resultado do join: %s\n", resultado);

  return 0;
}