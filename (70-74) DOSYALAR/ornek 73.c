#include <stdio.h>
#include <stdlib.h>
struct ucsayi
{
   int n1, n2, n3;
};
int main()
{
   int n;
   struct ucsayi s;
   FILE*fptr;
   if ((fptr = fopen("C:\\Users\\User\\OneDrive\\Рабочий стол\\DOSYALAR\\program.bin","rb")) == NULL){
       printf("Dosya acilirken hata olustu");
exit(1);
   }
for(n = 1; n < 5; ++n)
   {
      fread(&s, sizeof(struct ucsayi), 1, fptr); 
printf("n1: %d\tn2: %d\tn3: %d\n", s.n1, s.n2, s.n3);
   }
   fclose(fptr); 
     return 0;
}

