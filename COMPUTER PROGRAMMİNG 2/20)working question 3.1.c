#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define SIZE 40
 main()
 {
 	
 char a[SIZE]="";
 int i,count=0;
 for(i=0;i<SIZE-1;i++)
 {
  a[i]=rand()%94+33;	
 	
	 }	
 	
 a[SIZE]='\0'	;
 printf("%s \n",a);	
 
 for(i=0;i<SIZE-1;i++)
 {
 if(!isalnum(a[i]))
 {
  count++;	
 	
 	
	 }	
 	
  }
  printf(" count is %d",count);
 	
 	
 	
 	
 	
 	
 	
 }
