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
	
	
	// eðer bir deðiþkenin adresini(&a) fonksiyonun içindeki pointýra(*xptr) gönderir fonksiyonda iþleme sokarsak 
	// adresi deðiþmez ama deðeri deðiþir
	// eðer bir deðeri direkt fonksiyona gönderirsek adresini deðil degerini en son adresi deðiþir deðeri ayný kalýr.
	
}
