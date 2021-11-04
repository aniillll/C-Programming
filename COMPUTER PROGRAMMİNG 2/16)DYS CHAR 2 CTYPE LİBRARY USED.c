#include<stdio.h>
#include<ctype.h>//WE USED ctype library to determine digit or char or (is digit or letter) or (is not  digit or not letter) 
 main()
 {
 printf("acording to isdigit :\n");
 
 if(isdigit('8')) // isdigit funtion gives us is digit or not ?
  {
    printf("8 is a digit \n");
  }
 else
 {
 	printf("8 is not a digit \n");
 }
  if(isalpha('b')) // isdigit funtion gives us is digit or not ?
  {
    printf("b is a letter \n");
  }
 else
 {
 	printf("b is not a letter \n");
 }
   if(isalpha('8')) // isdigit funtion gives us is digit or not ?
  {
    printf("8 is a letter \n");
  }
 else
 {
 	printf("8 is not a letter \n");
 }
   if(isdigit('b')) // isdigit funtion gives us is digit or not ?
  {
    printf("b is a digit \n");
  }
 else
 {
 	printf("b is not a digit \n");
 }
   if(isalnum('#')) // isdigit funtion gives us is digit or not ?
  {
    printf("# is a letter or digit  \n");
  }
 else
 {
 	printf("# is not a letter or not digit \n");
 }
    if(isalnum('5')) // isdigit funtion gives us is digit or not ?
  {
    printf("5 is a letter or digit  \n");
  }
 else
 {
 	printf("5 is not a letter or not digit \n");
 }
    if(isalnum('a')) // isdigit funtion gives us is digit or not ?
  {
    printf("a is a letter or digit  \n");
  }
 else
 {
 	printf("a is not a letter or not digit \n");
 }
 
    if(isalnum('&')) // isdigit funtion gives us is digit or not ?
  {
    printf("& is a letter or digit  \n");
  }
 else
 {
 	printf("& is not a letter or not digit \n");
 }
 if(isdigit('a'))
 {
 printf("a is digit\n ");	
 	
 }
 else
 printf("a is not digit \n");	
   if(isalpha('w')) // isdigit funtion gives us is digit or not ?
  {
    printf("w is a letter   \n");
  }
 else
 {
 	printf("w is not a letter \n");
 }
 

 	
 	
 	
	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 }
