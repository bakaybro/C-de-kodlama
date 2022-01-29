#include <stdio.h>
int main()
{ 
    int i,n,sonuc;
    
    printf("N sayisini giriniz :"); scanf("%d", &n);
    sonuc = 0;
    i = 1;
    while (i<=n)
    {
        sonuc = sonuc+i;
        i=i+2;
    }
     printf ("%d e kadar olan sayilarin toplami : %d" ,n,sonuc  );
           
}

