#include <stdio.h>
float fonk1 (float fd1) 
{
  return 10*fd1;
}
main()
{
  float fd1;
  fd1 = 12.75;
    printf("%f", fonk1 (fd1));
}

