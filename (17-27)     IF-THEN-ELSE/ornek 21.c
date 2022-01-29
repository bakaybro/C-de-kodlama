#include <stdio.h> 
int main() 
{ 
int hafta; 
printf("bir hafta gunu gir (1-7): "); 
scanf("%d", &hafta); 
if(hafta == 1) 
{ 
printf("Pazartesi"); 
} 
else if(hafta == 2) 
{ 
printf("Sali"); 
} 
else if(hafta == 3) 
{ 
printf("Carsamba"); 
} 
else if(hafta == 4) 
{ 
printf("Persembe"); 
} 
else if(hafta == 5) 
{ 
printf("Cuma"); 
} 
else if(hafta == 6) 
{ 
printf("Cumartesi"); 
} 
else if(hafta == 7) 
{ 
printf("Pazar"); 
} 
else 
{ 
printf("Yanlis gun girdiniz! Luten 1-7 arasi bir sayi giriniz."); 
} 
return 0; 
}

