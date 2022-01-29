#include <stdio.h>
int main()
{
int i,n,yedek,dizi[50];
printf("Kac tane sayiyi tersten cevirmek istiyorsunuz?  :");scanf("%d", &n);
for(i=1;i<=n;i++)
{
printf("%d .elemani giriniz..: ",i); scanf("%d",&dizi[i]);
}
for(i=1;i<=(n/2);i++)
{
 yedek=dizi[i];
 dizi[i]=dizi[n+1-i];
 dizi[n+1-i]=yedek;
}
for(i=1;i<=n;i++) printf("%d  ",dizi[i]);
}
