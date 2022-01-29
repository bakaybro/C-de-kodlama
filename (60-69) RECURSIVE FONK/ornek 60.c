 
long int us_al(int b,int p)
{
    long int sonuc=1;
    if(p==0) return sonuc;
    sonuc=b*(us_al(b,p-1));  
}
int main()
{
    int taban,us;
    long int sonuc;
     
    printf("Taban sayisini giriniz ");     scanf("%d",&taban);
     
    printf("ustu giriniz");   scanf("%d",&us);
     
    sonuc=us_al(taban,us);
     
    printf("%d say?s?n?n %d kuvveti()ustu:): %ld\n",taban,us,sonuc);
     
    return 0;
}

