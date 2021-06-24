#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main(void) {
  srand(time(NULL));
  int linha;
  int coluna;
  char vogais[] = "AEIOU";
  printf("Digite o número de linhas e colunas para sua matriz.\n\nLinhas: ");
  scanf("%d", &linha);
  printf("Colunas: ");
  scanf("%d", &coluna);
  char **matriz = (char**) malloc(linha*sizeof(char*));
  for(int i=0; i<linha;i++){
    matriz[i] = (char*) malloc(coluna*sizeof(char));
  }
  for (int i=0;i<linha;i++){
    for(int y=0;y<coluna;y++){
      matriz[i][y] = vogais[rand() % 4];
    }
  }
  for (int i=0;i<linha;i++){
    for(int y=0;y<coluna;y++){
      printf("[%c] ", matriz[i][y]);
    }
    printf("\n");
  }
  return 0;
}