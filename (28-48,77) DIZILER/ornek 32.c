#include <stdio.h>
#include <math.h>
float a[3] [3] = {1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0};
int  i,j;
main()
{
     for (i=0; i<3; i++) 
     {
          for (j=0; j<3; j++) 
                 printf("%f", sqrt(a[i] [j]) );
     printf("\n");
      }
 }

