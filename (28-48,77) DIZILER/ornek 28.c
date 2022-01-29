   #include <stdio.h>
int  main()
{
   int n[5], i;
   printf("5 adet sayi giriniz\n");
   for (i=0; i<5; i++)
      scanf("%d", &n[i] );
   printf("Girirlen sayilar (sondan basa): \n");
   for (i=4; i>=0; i--)
      printf("%d\n", n[i]);
   return 0;
}

