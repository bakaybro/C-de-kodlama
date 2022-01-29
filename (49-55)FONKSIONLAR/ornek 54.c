#include <stdio.h>
int eb(int x, int y, int z )
{ 
int ebs = x;
 if ( y > ebs )
 ebs = y;
 if ( z > ebs )
 ebs = z;
 return ebs;
} 
main()
{ int a, b, c;
 printf("3 adet tam sayi giriniz:");
 scanf("%d %d %d", &a, &b, &c);
 printf("Girilen sayilarin en buyugu: %d\n", eb(a, b, c));
}

