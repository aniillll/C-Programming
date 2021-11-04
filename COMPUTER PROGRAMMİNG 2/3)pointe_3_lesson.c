#include<stdio.h>
main()
{
 int i,j=1;
 int *jptr1,*jptr2=&j;	
 jptr1=jptr2;
 i=++(*jptr2); // *jptr2 demek öbce jptr2 adresine git sonra * ile bu adrese gir ve deðeri al demek yani j deðeriolan 2 yi.
               // ++x demek ilk satýrda x=1 ayný kalsýn(x=1) 2. satýrda x in deðer i 1 fazla olur yani x=2 artýk
 (*jptr2)=i+(*jptr1);	
	
	printf("i=%d \n",i);
	printf("j=%d \n",j);
	printf("*jptr1=%d \n",*jptr1);
	printf("*jptr2=%d \n",*jptr2);
	
	
	
	
	
}
