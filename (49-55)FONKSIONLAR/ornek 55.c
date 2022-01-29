#include <stdio.h>
int fakt(int i)
{ 
int j, f = 1;
for(j = i; j >= 1; j--)
f = f * j;
return f;
}
main()
{
int n;
 printf("Pozitif bir tam sayi giriniz:");
 scanf("%d", &n);
 printf("Sayinin faktoriyeli: %d\n", fakt(n));
}

