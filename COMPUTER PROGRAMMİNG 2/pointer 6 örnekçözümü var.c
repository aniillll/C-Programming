#include<stdio.h>

main()
{
int i=5;
int *iptr;
iptr=&i; // pointer adress tutar //pointerları tanımladım
printf("%p \n",iptr); // burada pointer i nin adresini nerede tuttuğunu bastırdığını öğrendik
printf("%d",*iptr);	// burada önce pointerın tuttuğu adrese gittik o adreste i nin değeri var * ile onu bastırdık 
	
	
	
	
}
