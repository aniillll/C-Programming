#include <stdio.h>
main()
{
 int a =8, *aptr; //�nce a y� ve aptr �n� tan�mlad�k.
 aptr=&a; // pointer *aptr mesela a n�n yerini tutar. 
 float b=3.2, *bptr;
 bptr=&b;
 double c =3.25,*cptr;
 cptr=&c;
 int arrey[5]={1,2,3,4,5};
 int *arreyptr;
 arreyptr=&arrey[3];
 printf("%p adresli int de�eri %d \n",&aptr,*aptr);
 printf("%p adresli float�n  de�eri %f \n",&bptr,*bptr);
 printf("%p adresli double de�eri %lf \n",&cptr,*cptr);
 printf("%p adresli dizinin 3 indeksinin de�eri %d  \n",&arreyptr,*arreyptr);
 	
	
	
	
}
