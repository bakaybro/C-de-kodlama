#include <stdio.h>
#include <stdlib.h>
int main()
{
   int sayi;
   FILE *fptr;
   fptr = fopen("C:\\Users\\User\\OneDrive\\Рабочий стол\\DOSYALAR\\deneme.txt","w");
   if(fptr == NULL)
   {
      printf("HATA!");  exit(1);       
//exit 1 ba?ar?s?z bir sonland?rmay? ifade eder     
//exit 0 ba?ar?sl? bir sonland?rmay? ifade eder      
    }
  printf("Bir Sayi Giriniz: ");
   scanf("%d",&sayi);
   fprintf(fptr,"%d",sayi);
   fclose(fptr);
   return 0;
}

