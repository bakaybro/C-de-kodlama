#include <stdio.h> 
int main() 
{ 
int i, n, toplam=0; 
printf("Bir Sayi Giriniz: "); 
scanf("%d", &n); 
     for(i=1; i<=n; i++) 
        {  
          toplam += i; 
        } 
printf("%d sayisina kadarki sayilarin toplami= %d", n, toplam); 
return 0; }

