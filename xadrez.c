#include <stdio.h>

void torre(int casas) {
  // implementaçao utilizando funçao recursiva
  if (casas > 0) {
    printf("Direita\n");
    torre(casas - 1);
  }
}
void rainha(int casas) {
  // implementaçao utilizando funçao recursiva
  if (casas > 0) {
    printf("Esquerda\n");
    rainha(casas - 1);
  }
}
void bispo(int casas) {
  // implementaçao utilizando loops alinhados
  for (int i = 0; i < casas; i++) {
    printf("Direita\n");
    for (int j = 0; j < 1; j++) {
      printf("Cima\n");
    }
  }
}
void cavalo() {
  // implementaçao utilizando loops alinhados
  for (int i = 0; i < 1; i++) {
    printf("Direita\n");
    int j = 0;
    while (j < 2) {
      printf("Cima\n");
      j++;
    }
  }
}

int main() {

  // movimentaçao do cavalo
  printf("Cavalo\n\n");
  cavalo();
  printf("\n");

  // movimentaçao do bispo
  int casas_bispo = 5;
  printf("Bispo\n\n");
  bispo(casas_bispo);
  printf("\n");

  // movimentaçao do torre
  int casas_torre = 5;
  printf("Torre\n\n");
  torre(casas_torre);
  printf("\n");

  // movimentaçao do rainha
  int casas_rainha = 8;
  printf("Rainha\n\n");
  rainha(casas_rainha);

  return 0;
}
