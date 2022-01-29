# include <stdio.h>
# include<string.h> 
char katar[50]; 
int i;
main()
{
strcpy(katar, "Kazakistan");
strcat(katar, " ve Turkiye");
 
for(i=0; katar[i]; i++) 
printf("%c", katar[i]);
}

