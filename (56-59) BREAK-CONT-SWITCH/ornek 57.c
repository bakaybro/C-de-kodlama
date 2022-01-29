#include <stdio.h>
int main() {
   int i;
   double sayi, tpl = 0.0;
   for (i = 1; i <= 5; ++i) {
      printf("%d. sayi: ", i);  scanf("%lf", &sayi);
      // negatif say? girilirse d?ng? duracak (break)
      if (sayi < 0.0) { 
    break;
      }
      tpl += sayi; // tpl = tpl + sayi;
   }
   printf("Toplam = %.2lf", tpl);
   return 0;
}

