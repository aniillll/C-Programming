#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define SIZE 40
 main()
 {
 char a[SIZE+1]={};
 int i,count=0;
 for(i=0;i<SIZE;i++)
 {
   a[i]=rand()%93+33;
   
	 }	
 a[SIZE+1]='\0';

  printf("string is %s",a);

 for(i=0;i<SIZE;i++)
 {
 if(!isalnum(a[i]))	
 {
 	
 count ++;	
 	
 	
 }
 	
 	
 }
 printf("\n counter is %d",count);
  }
 
 
