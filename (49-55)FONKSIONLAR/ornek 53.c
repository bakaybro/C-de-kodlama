#include <stdio.h>
int carp(int x, int y) 
{ 
    int sonuc;       sonuc= x * y;
return sonuc; 
}
main() 
{ 
    int a, b, c;
    printf ("Birinci sayiyi giriniz:");     scanf("%d", &a);
    printf("Ikinci sayiyi giriniz:");        scanf("%d", &b);
    c=carp(a, b);
    printf("Carpim: %d\n", c);
/* veya printf("Carpim: %d\n", carp(a, b)); */
}

