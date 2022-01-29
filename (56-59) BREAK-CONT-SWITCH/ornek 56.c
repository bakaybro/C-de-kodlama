#include <stdio.h> 
int fakt(int); /* fonksiyon ?n bildirimi */ 
void main() 
{ 
    int n; 
   printf("Pozitif bir tam sayi giriniz:"); scanf("%d", &n); 
printf("%d ye kadar ki sayilarin toplami: %d\n", n, toplam(n)); 
} 
int toplam(int i) 
{ 
    if (i == 1) 
return 1;
else 
return i+toplam(i-1); 
 }

