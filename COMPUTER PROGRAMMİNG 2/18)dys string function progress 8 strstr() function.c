#include<stdio.h>
#include<string.h>
 main()
 {
 char *a="anýl okula gitti";
 char *b="okula";
 if(strstr(a,b)!=NULL)
 {
 	printf("%s string  found in %s string \n",b,a);
 	printf("\n %s",strstr(a,b));

	 }	
 else
 {
 	printf("%s string doen not found in %s string \n",b,a);
 	
	 }	
 	
 	
 	
 	
 	
 	
 }
