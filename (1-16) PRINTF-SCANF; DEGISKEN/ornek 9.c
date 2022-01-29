#include <stdio.h>
#include <conio.h>
    int main(){
        int sayi;
        printf(" bir sayi girin: ");
        scanf("%d", &sayi);
        if (sayi<0){
            printf("sayi negatif");
        }
        else if(sayi>0){
            printf("sayi pozitif");
        }
        else{
            printf("sayiniz sifirdir");
        }
        getch();
        
    }

