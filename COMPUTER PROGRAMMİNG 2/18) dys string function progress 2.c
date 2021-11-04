#include<stdio.h>
#include<string.h>

 main()
 {
 char a[20]="Happy "; // initialize char array a
 char b[]="New year "; // initialize char array b
 char c[40]="";	        // initialize char array c empty
  printf("in array a: %s \n",a);
  printf("in array b: %s \n",b);
  printf("in array c: %s \n",c);	
 	
 	// b yi a nýn sonuna akleyeceðiz strcat(a,b); ile
 strcat(a,b);
  printf("\nafter calles strcat(a,b): %s \n",a);
   printf("ýn array b: %s \n",b);	
 strncat(c,a,6)	;
  printf("\nýn array c: %s \n",c);
 strcat(c,a);
  printf("in array a: %s \n",a);
  printf("in array b: %s \n",b);
  printf("in array c: %s \n",c);
 	
 	
 	
 	
 	
 	
 	
 }
