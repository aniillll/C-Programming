#include<stdio.h>
#include<string.h> 
 main()
 {
 char a[]=" A carefully reasoned, ordered sentence tells it clearly";	
 char word[10];
 int i=0,j=0;
 while(a[i]!='\0')
 {
 if(a[i]==' ')
 {
 word[j]=a[i+1];	
 printf("%c \n",a[i+1]);	
 j++;	
 }
 i++;	
 	
 	
 }
 word[j]='\0';
 
 printf("%s ",word);	
 	
 	
 	
 	
 }
