#include<stdio.h>
main()
{
	int i=6;
	int *p=&i; // ampersant & ile i nin  adresini pointera atad�m
	// ampersant & i�areti adress atama operat�r�d�r
	// * i�areti pointer�n i�ine gidip de�erini okumam�z� sa�l�yor
	printf("%p \n",&p); // %p pointer�n(pointer i�inde adress tutar) i�inde tuttu�u adresi okumak i�in kullanl�r
	printf("%p",&p);
	

}
