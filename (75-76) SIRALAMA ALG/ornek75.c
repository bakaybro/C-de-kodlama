#include <stdio.h>
int main()
{int dizi [100],n,c,d,degistir;
printf("Kac sayi Siralanacak: "); scanf("%d",&n);
printf("%d sayi giriniz ve her girdiginiz sayidan sonra ENTER a basiniz\n",n);
for(c=0;c<n;c++) scanf("%d",&dizi[c]);
for(c=0;c<n-1;c++)
{
    for(d=0;d<n-c-1;d++)
        {
	if(dizi[d]>dizi[d+1]) 
            		{
                			degistir=dizi[d];
                			dizi[d]=dizi[d+1]; 
                			dizi[d+1]=degistir;
            		}
        }
}
printf("Kucukten buygue sirali dizi:\n");
for(c=0;c<n;c++)printf("%d ",dizi[c]);
return 0;
}

