# include <stdio.h>
# include <string.h> 
main()
{ 
   char sifre[20]; 
   printf("SIFRE : "); 
   scanf("%s",sifre); 
  
  if( strcmp(sifre,"deneme")==0 ) 
     puts("sifre dogru girildi"); 
  else 
     puts("sifre yanlis!"); 
 }

