#include <stdio.h>
#include <conio.h>
 int vize, final;
 float ortalama;
 int main(){
  printf("lutfen vize notunu girin: ");
  scanf("%d", &vize);
  printf("\n lutfen final notunu girin: ");
 scanf("%d", &final);
       
 ortalama = vize*0.4+final*0.6;
 if(ortalama<60){
 printf("\n sinifta kaldin");
 }
  else {
       printf ("\n sinifi gectin");
       getch();
 }
}
