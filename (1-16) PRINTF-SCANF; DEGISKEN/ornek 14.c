#include <stdio.h>
int main(void)
{
  int id1, id2;
  float fd1, fd2;
  printf("Bir int deger giriniz: ");   scanf("%d", &id1);
  printf("Bir int deger daha giriniz: ");   scanf("%d", &id2);
  printf("float bir deger giriniz: ");   scanf("%f", &fd1);
  printf("float bir deger daha giriniz: ");  scanf("%f", &fd2);
  printf("Girilen 2 int degerin carpimi : %d\n", id1*id2);
  printf("Girilen 2 float degerin toplami : %f", fd1+fd2);
  
  return 0;
}

