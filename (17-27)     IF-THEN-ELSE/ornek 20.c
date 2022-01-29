#include <stdio.h> 
int main() 
{ int num; 
printf("Bir sayi giriniz: "); 
scanf("%d", &num); 
if((num % 5 == 0) && (num % 11 == 0)) 
{ 
printf("Sayi 5 e ve 11 e bilinebilir"); 
} 
else 
{ printf("Sayi 5 ve 11 bilinmez"); 
} 
return 0; 
}

