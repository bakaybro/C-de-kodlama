#include <stdio.h>
//Struct tan?m?
struct POINT{
    int x;
    int y;
};
int main()
{
    struct POINT p; //Point tipinde bir struct olu?turuluyor.
    //p'nin i?eri?inde bulunan x ve y de?i?kenlerine de?erler veriliyor.
    p.x=234;
    p.y=987;
    //p'nin i?eri?i ekrana yazd?r?l?yor.
    printf("x=%d\ny=%d",p.x,p.y);
    return 0;
}

