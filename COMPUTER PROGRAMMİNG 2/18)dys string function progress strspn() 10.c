#include<stdio.h>
#include<string.h>
 main()
 {
 	char *a="The value is 3.14159";
 	char *b="aehi lsTuv";
 	
 	
  if(strspn(a,b)!=NULL)
  {
    printf("\n%s string  size is  in %s string = %d \n",b,a,strspn(a,b));
    
  	
  	// b stringinin kaç karakterinin boyut olarak a stringinin içinde olduðunu bulduk strspn(a,b) ile
  }
  
}
