#include <stdio.h>
 void max(int *aptr);
main()
{
	int sayilar[5]={115,100,3,90,5};
    max(sayilar);
	/* 
	ilk �nce dizinin ilk eleman�n� fonksiyonun i�indeki
	pointer a g�nderdil
	*/	
}
 void max(int *a )
 {
 	/* 
	 fonksiyonun i�inde *(aptr+1) ile a[i] ayn� �ey oldu�u i�in a[i] ile i�lem yapt�k
	 mesela *(aptr)=a[0] denk biribirine 
 	pointer a dizininin adresini g�nderme kullanmam�z�n nedeni fonksiyon
 	bittikten sonra dizinin elemanlqr�n�n yerinin de�i�mesi
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
