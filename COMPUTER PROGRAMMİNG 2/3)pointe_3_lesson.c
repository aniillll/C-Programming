#include<stdio.h>
main()
{
 int i,j=1;
 int *jptr1,*jptr2=&j;	
 jptr1=jptr2;
 i=++(*jptr2); // *jptr2 demek �bce jptr2 adresine git sonra * ile bu adrese gir ve de�eri al demek yani j de�eriolan 2 yi.
               // ++x demek ilk sat�rda x=1 ayn� kals�n(x=1) 2. sat�rda x in de�er i 1 fazla olur yani x=2 art�k
 (*jptr2)=i+(*jptr1);	
	
	printf("i=%d \n",i);
	printf("j=%d \n",j);
	printf("*jptr1=%d \n",*jptr1);
	printf("*jptr2=%d \n",*jptr2);
	
	
	
	
	
}
