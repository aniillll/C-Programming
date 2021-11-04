#include<stdio.h>
#include<string.h>
#define SIZE 100
 main()
 {
 char s1[SIZE]="This is a test sentence Eskisehir is a beautiful city in Turkey.";
 char *tokenPtr;
 printf("%s",s1);
 tokenPtr=strtok(s1,"i");
 while(tokenPtr!=NULL)
 {
 printf("%s \n",tokenPtr);
 
 tokenPtr=strtok(NULL,"i");	
 	
 	
 	
 }
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 }
