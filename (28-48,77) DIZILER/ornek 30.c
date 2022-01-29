#include <stdio.h>
int  main()
{
     int n[10], i;
     double toplam=0, ortalama;
     printf("10 adet notu giriniz\n");
     for (i=0; i<10; i++) {
           scanf("%d", &n[i] );
           toplam=toplam+ n[i];
     }
      ortalama=toplam/10;
      printf("Sinifin ortalamasi=%.2f\n", ortalama);
      printf("Ortalamadan yiksek olan notlar:\n");
      for (i=0; i<10; i++) {
           if( n[i]>ortalama)
           printf("%d\n",n[i]);
      }
     return 0;
   }

