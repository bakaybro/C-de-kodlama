#include <stdio.h>
void kare(int x) 
{ 
    printf ("Sayi: %d Karesi: %d\n", x, x*x);
}
 main() 
{
 int sayi;
printf("Bir sayi giriniz:");
scanf ("%d", &sayi);
kare(sayi);
}

