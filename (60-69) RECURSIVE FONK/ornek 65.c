#include <stdio.h>
int main()
{ 
    int i,sayi; float n,toplam,ortalama;
    printf("Lutfen sayi miktarini giriniz : \n");scanf("%f",&n); 
      toplam = 0;
         for (i=1; i<=n; i++ )
              {
                 printf("%d . sayi giriniz :",i);scanf("%d",&sayi);
                 toplam = toplam + sayi;
              }
    ortalama = toplam /n;    printf("Girilen sayilarin aritmetik ortlamasi: %f", ortalama);
}

