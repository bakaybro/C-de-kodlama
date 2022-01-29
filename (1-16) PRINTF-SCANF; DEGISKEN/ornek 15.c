#include <stdio.h>
int main(void)
{
  int id1, id2;
  printf("Bir int deger giriniz: ");   scanf("%d", &id1);
  printf("Bir int deger daha giriniz: ");   scanf("%d", &id2);
  printf("int degerlerin karelerinin toplami: %d", (id1*id1)+(id2*id2));
  
  return 0;
}

