#include <stdio.h>
char katar [4] [3];
int  i,j;
main()
{
     for (i=0; i<3; i++)  /* Katarin ici dolduruluyor  */
           for (j=0; j<4; j++)
                 katar[i] [j]=i*j;       
     {
          for (i=0; i<3; i++)  /* Katar Yazdiriliyor  */
                for (j=0; j<4; j++)
                      printf("    %d", katar[i] [j] );
                      printf("\n");
      }
 }

