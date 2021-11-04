#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
 main()
 {
 char c[50];
 int i,j=0,k=0,m=0,l=0,n=0;
 for(i=0;i<49;i++)
 {
 	
 c[i]=rand()%94+33;	
 	
 }	
 c[i]='\0';
 printf("string c :%s",c);	
 char digits[50]={ },upper[50]={ },lower[50]={ },specials[50]={ };	
 for(i=0;i<49;i++)
 {
 if(isdigit(c[i]))
 {
 	digits[j]=c[i];
 j++;
  }	
  
  else if(islower(c[i]))
  {
  	
  lower[m]=c[i];	
  	m++;
  	
  }
  
  else if(isupper(c[i]))
  {
  upper[l]=c[i];
  l++;	
  	
  	
  }
  else
  {
  specials[k]=c[i];	
  	k++;
  	
  }
 	
	
	
 }	
 printf("\n digit \n");
 for(n=0;n<49;n++)
 {
 printf("%c",digits[n]);	
 	
 }
 printf("\n lower \n");
 for(n=0;n<49;n++)
 {
 printf("%c",lower[n]);	
	
 }
 printf("\n upper \n");
  for(n=0;n<49;n++)
 {
 printf("%c",upper[n]);	
	
 }
 printf("\n special \n");
  for(n=0;n<49;n++)
 {
 printf("%c",specials[n]);	
	
 } 	
 	
 	
 	
 	
 	
 	
 }

