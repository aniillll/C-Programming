#include<stdio.h>

void callbyreferance(int *xptr,int *yptr,int z);
main()
{
int a=5,b,c;
  printf("a is %d a dress is %p \n",a,&a);
  printf("b is %d b dress is %p \n",b,&b);
  printf("c is %d c dress is %p \n",c,&c);
	
callbyreferance(&a,&b,c);
  printf("after call function \n")	;
  printf("a is %d a dress is %p \n",a,&a);
  printf("bis %d b dress is %p \n",b,&b);
  printf("c is %d c dress is %p \n",c,&c);
	
}
void callbyreferance(int *xptr,int *yptr,int z)
{
  printf("*xptr is %d xptr dress is %p \n",*xptr,xptr);	
  
  (*yptr)=7;
  z=(*yptr)*(*xptr)	;
  printf("c in function is %d c in function  dress is %p \n",z,&z);	
	
	
	// e�er bir de�i�kenin adresini(&a) fonksiyonun i�indeki point�ra(*xptr) g�nderir fonksiyonda i�leme sokarsak 
	// adresi de�i�mez ama de�eri de�i�ir
	// e�er bir de�eri direkt fonksiyona g�nderirsek adresini de�il degerini en son adresi de�i�ir de�eri ayn� kal�r.
	
}
