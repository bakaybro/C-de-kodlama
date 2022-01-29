#include<stdio.h>
int main( void )
{
	int girilen_yas;
	printf("Lutfen yasinizi giriniz> "); 	scanf("%d",&girilen_yas);
	if( girilen_yas < 18 )
		printf("Daha cocuk yastasiniz, hayatin baslindasiniz.\n");
	if( girilen_yas >= 18 && girilen_yas <= 30 )
		printf("Gencligin, guzelligi bambaska!\n");
	if( girilen_yas > 30 && girilen_yas <= 50 )
		printf("Hepsini bosverin, olgunluk ortayasta baslar!\n");
	return 0;
}

