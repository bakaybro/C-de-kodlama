#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int x;
    printf("bir saii giriniz:");
    scanf ("%d",&x);
    if(x > 0)
    {
      printf("\nSayiniz %d 0 dan buyuktur",x);
    }
    else
    {
       printf("\nSayiniz %d 0 dan kucuk ya da esittir",x);
    }
    return 0;
}

