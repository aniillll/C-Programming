#include<stdio.h>
#include<string.h>
 main()
 {
 	char *a="The value is 3.14159";
 	char *b="1234567890l";
 	

    printf("\n%s string  size is  in %s string = %d \n",b,a,strcspn(a,b));
    
  	// b stringinin ka� karakterinin boyut olarak a stringinin i�inde olmad���n� bulduk
  	
 }
