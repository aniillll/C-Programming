#include <stdio.h>
 void max(int *aptr);
main()
{
	int sayilar[5]={115,100,3,90,5};
    max(sayilar);
	/* 
	ilk önce dizinin ilk elemanýný fonksiyonun içindeki
	pointer a gönderdil
	*/	
}
 void max(int *a )
 {
 	/* 
	 fonksiyonun içinde *(aptr+1) ile a[i] ayný þey olduðu için a[i] ile iþlem yaptýk
	 mesela *(aptr)=a[0] denk biribirine 
 	pointer a dizininin adresini gönderme kullanmamýzýn nedeni fonksiyon
 	bittikten sonra dizinin elemanlqrýnýn yerinin deðiþmesi
	*/
    int gecici=a[0],i;
 for(i=1;i<5;i++)
 {
    if(a[i]>gecici)
    {
      gecici=a[i];
	}
 }
 printf("%d",gecici);
 }
