# include <stdio.h>
# include <string.h> 
int main() 
{ 
     char sifre[8]; 
     int sonuc, hak=3; 
     while( hak-- > 0 ) 
     { 
          printf("Sifre : "); 
          gets(sifre); /* ?ifreyi al */ 
          sonuc = strcmp(sifre,"sqRt2022@"); 
          if( sonuc==0 ) { /* ?ifre kontrol */ 
               puts("sifre dogru"); 
               break; 
          } 
         else 
               puts("sifre yanlis"); 
     } 
return 0; 
}

