#include<stdio.h>
#include<string.h>
 main()
 {
 	char *a="The value is 3.14159";
 	char *b="aehi lsTuv";
 	
 	
  if(strspn(a,b)!=NULL)
  {
    printf("\n%s string  size is  in %s string = %d \n",b,a,strspn(a,b));
    
  	
  	// b stringinin ka� karakterinin boyut olarak a stringinin i�inde oldu�unu bulduk strspn(a,b) ile
  }
  
}
