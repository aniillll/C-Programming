#include<stdio.h>
#include<string.h>

 main()
 {
 char *a[7]={"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"};
 // stringleri pointer�n i�ine att�k
 int i;
 
 for(i=0;i<7;i++)
 {
 printf("%s \n",*(a+i));
 	
 }
 
 	
 	
 	
 	
 	
 	
 }
