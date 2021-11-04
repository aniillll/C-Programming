#include <stdio.h>
main()
{
 int a =8, *aptr; //önce a yý ve aptr ýný tanýmladýk.
 aptr=&a; // pointer *aptr mesela a nýn yerini tutar. 
 float b=3.2, *bptr;
 bptr=&b;
 double c =3.25,*cptr;
 cptr=&c;
 int arrey[5]={1,2,3,4,5};
 int *arreyptr;
 arreyptr=&arrey[3];
 printf("%p adresli int deðeri %d \n",&aptr,*aptr);
 printf("%p adresli floatýn  deðeri %f \n",&bptr,*bptr);
 printf("%p adresli double deðeri %lf \n",&cptr,*cptr);
 printf("%p adresli dizinin 3 indeksinin deðeri %d  \n",&arreyptr,*arreyptr);
 	
	
	
	
}
