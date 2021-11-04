#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
 main()
 {
 	char string[]="-This , is asample string .www.ogu.edu.tr";
 	char *a;
 	 printf(" size of string %d \n ",strlen(string));
 	a=strtok(string," .-,");
 	while(a!=NULL)
 	{
 	printf("%c \n",*a);
	a=strtok(NULL," ,-.");	
 		
 		
 		
 		
 		
	 }
	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 }
