#include <stdio.h>
#include <stdlib.h>

int main() {
  float nota1;
  float nota2;
  
  printf("fale sua primeira nota:\n");
    scanf("%f", &nota1);

    printf("fale sua nota 2:\n");
  scanf("%f", &nota2);

 float media = (nota1 * 0.4) + (nota2 * 0.6);

  printf("ficou: %.2f", media);

return 0;
}