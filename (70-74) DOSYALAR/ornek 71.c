#include <stdio.h>
#include <stdlib.h>
int main()
{
   int sayi;
   FILE *fptr;
   if ((fptr = fopen("C:\\Users\\User\\OneDrive\\������� ����\\DOSYALAR\\deneme.txt","r")) == NULL){
       printf("Dosya acilirken HATA! olustu");
       // Dosya i?aret?isi NULL d?nd?r?rse programdan ??kar.
       exit(1);
}
fscanf(fptr,"%d", &sayi);
   printf("Deger =%d", sayi);
   fclose(fptr); 
     return 0;
} 

