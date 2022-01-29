#include <stdio.h>
void carp(int x, int y) 
{ 
printf ("%2d * %2d = %3d\n", x, y, x*y);
}
main()
{ carp(10,20);
carp(5,6);
carp(8,9);
}

