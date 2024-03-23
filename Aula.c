#include <stdio.h>

int main(void) {
  float n1, n2, n3, media = 0;
  printf("\ninforme a primeira nota: ");
  scanf("%f", &n1);
  printf("\ninforme a segunda nota: ");
  scanf("%f", &n2);
  media = (n1 + n2) / 2;
  printf("a media é: %.2f", media);

  if (media >= 7) { 
    printf("\nAprovado");
    return 0;
  } else if (media < 5) {
    printf("\nReprovado");
    return 0;
  } else {
      printf("\nRecuperação! Digite uma nova nota: ");
      scanf("%f", &n3);
    }
  if (n1 > n2) {
    media = (n1 + n3) / 2;
  
  } else { 
    media = (n2 + n3) / 2;
  } 
  
  if (media >= 7) {
    printf("\nAprovado");
  }
  else {
    printf("\nReprovado");
  
  }

  return 0;
}