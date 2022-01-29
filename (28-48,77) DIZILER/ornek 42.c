# include <stdio.h>
# include <string.h> 
char katar1[50], katar2[50]; 
main()
{
strcpy(katar1, "Kazakistan");
strcpy(katar2, " Kazak");
 
if(strcmp(katar1,katar2))
     printf("Katarlar birbirinden farkli");
else
     printf("Katarlar birbirinin ayni");
}

