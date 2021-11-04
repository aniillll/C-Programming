#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<time.h>

 main()
 {
 char a[]="this is a test ";
 char *bptr;
 bptr=strtok(a," ");
 
 while(bptr!=NULL)
 {
 printf("%s \n",bptr);
 bptr=strtok(NULL," ");	
	
 }
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 }
