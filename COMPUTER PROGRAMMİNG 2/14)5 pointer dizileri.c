#include<stdio.h>
#include<string.h>
 char *ensalak(char *b,int size);
 main()
 {
  char *a[5]={"anýl","özge","sezgin","gamze","cansu"};
  	
 ensalak(a,5);
 printf("%s",ensalak(a,5));
 	
 	
 	
 	
 }
 char *ensalak(char *b,int size)
 {
 	char a;
 	int i;
 printf("enter a day");
 scanf("%s",a);
 for(i=0;i<size;i++)
 {
   if(*(b+i)==a)
   {
   	
    return a;	
   }
  	
 	
	 else
 	{
 		return '\0';
	 }
 	
 }
 	
 	
 	
 	
 	
 }
