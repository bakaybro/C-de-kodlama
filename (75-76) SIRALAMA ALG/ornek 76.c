#include <stdio.h>
int main()
{
  int dizi[100], n, c, d, position, t;
  printf("Dizi Kac elemanli olsun:");scanf("%d", &n);
  printf("%d sayi giriniz ve ENTER a basiniz\n",n);
  for (c = 0; c < n; c++)     scanf("%d", &dizi[c]);
  for (c = 0; c < (n - 1); c++) // minimum eleman? n-1 kere bulma
  {
    position = c;
    for (d = c + 1; d < n; d++)
    {
      if (dizi[position] > dizi[d]) 
        position = d;
   }
if (position != c)
    {
      t = dizi[c];
      dizi[c] = dizi[position];
      dizi[position] = t;
    }
  }
  printf("Kucukten buyuge sirali liste:\n");
  for (c = 0; c < n; c++)
    printf("%d", dizi[c]);
  return 0;
}

