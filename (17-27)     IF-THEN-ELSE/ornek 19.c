#include <stdio.h>
int main(void) {
    int n = 5;
    int m = 10;
    if(n > m || n == 15) {
        printf("Either n is greater than m, or n is equal to 15\n");
    } 
    else if( n == 5 && m == 10 ) {
        printf("n is equal to 5 and m is equal to 10!\n");
    } 
    else if ( !(n == 6)) {
        printf("It is not true that n is equal to 6!\n");
    }
    else if (n > 5) {
        printf("n is greater than 5!\n");
    }
    return 0;
}

