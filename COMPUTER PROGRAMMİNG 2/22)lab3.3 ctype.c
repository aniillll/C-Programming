#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
 main()
 {
  if(!isdigit('a'))//eðer a sayý deðilse(!isdigit()) 
  {
  	
  	printf("a is a character \n");
  	
	  }	
 else
 {
 	
 	printf("a is a number \n");
	 }	
 if(isdigit('8'))
 {
 	
 	printf("8 is a number \n");
 	
	 }	
 else
 {
 	
 	printf("8 is not a number \n");
 }
 	
 if(isalpha('a'))
 {
 	
 	printf("a is letter \n");
	 }	
  else
 {
 	
 	printf("a is not letter\n");
	 }		
 if(isalnum('7'))
 {
 	
 printf("7 is alpha or digit \n");
 }	
   else
 {
 	
 	printf("7 is not letter or alpha \n");
  }	
 	
 if(!isalnum('*'))
 {
 	
 	printf("* is not alpha or number \n");

	 }	
  else
 {
 	
 printf("* is alpha or digit\n");
 }	
 	
 if(islower('a'))
 {
 	printf("a is a lowercase\n");
	 }	
 else
 {
 printf("a is not a lowercase\n");	
 	
	 }	
  if(isupper('A'))
 {
 	printf("A is a UPPERcase\n");
	 }	
 else
 {
 printf("A is not a UPPERcase\n");	
 	
	 }	
 printf("A controvert to %c \n",tolower('A'));
 		
  printf("a controvert to %c \n",toupper('a'));	
 	
 }
