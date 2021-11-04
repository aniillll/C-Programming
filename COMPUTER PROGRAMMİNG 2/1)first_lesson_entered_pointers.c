#include<stdio.h>
main()
{
	int i=6;
	int *p=&i; // ampersant & ile i nin  adresini pointera atadým
	// ampersant & iþareti adress atama operatörüdür
	// * iþareti pointerýn içine gidip deðerini okumamýzý saðlýyor
	printf("%p \n",&p); // %p pointerýn(pointer içinde adress tutar) içinde tuttuðu adresi okumak için kullanlýr
	printf("%p",&p);
	

}
