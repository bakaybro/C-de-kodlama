#include <stdio.h>
int main() 
{ 
int i, sayi_1,sayi_2,tpl=0; 
printf("Bailangic sayisini gir:"); 
scanf("%d", &sayi_1); 
printf("Bitis sayisini gir:"); 
scanf("%d", &sayi_2); 
for(i=sayi_1; i<=sayi_2; i++) 
{ 
tpl += i; 
} 
printf("%d sayisindan %d sayisina kadarki toplam= %d", sayi_1, sayi_2, tpl); 
return 0; 
}

