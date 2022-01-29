# include <stdio.h>
int main()
{
char ktr[20]; 
int i,sayac = 0;
 
printf("\nBir seyler yazin :"); 
scanf("%s",ktr); 
for(i=0;ktr[i];i++) 
     if( ktr[i]=='m' ) sayac++;
 
printf("yazilanlarin icinde %d tane m harfi var",sayac);
}

