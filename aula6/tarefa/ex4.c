// 3. Ainda sobre o exercício 1, implemente uma versão usando o comando while().

#include <stdio.h>

int main () {
  int i=0, soma=0;

  while (1) {
    if ((i%3) == 0 && (i%2) != 0) {
      soma = soma+i;
    }
    i++;
    if (i==500)
  }
  printf("A soma de todos os números ímpares e múltiplos de três do intervao 1 a 500 é: %d\n", soma);
}
