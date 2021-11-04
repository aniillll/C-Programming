#include<stdio.h>
#include<ctype.h>
  // I wrote this programm to determined lowercase or uppercase
  // and also to convert from lowercase to uppercase or exactly reverse
  main()
  {
  	
  if(isupper('k'))
  {
  	
  	printf("k is uppercase\n");
  	
  	
	  }	
  else
  {
  	printf("k is not uppercase \n");
	  }	
  if(islower('A'))
  {
  	
  	printf("A lowercase \n");
  	
  	
	  }	
  else
  {
  	printf("A is not lowercase \n");
	  }	 	
   
    if(islower('k'))
  {
  	
  	printf("k is lowercase \n");
  	
  	
	  }	
  else
  {
  	printf("k is not lowercase \n");
	  }		
  	
    if(isupper('C'))
  {
  	
  	printf("C is uppercase\n");
  	
  	
	  }	
  else
  {
  	printf("C is not uppercase \n");
	  }		
  // converted from uppercase to lowercase or revers.
  printf("k is converted to %c \n",toupper('k'));
  printf("K is converted to %c \n",tolower('K'));
  printf("8 is converted to %c \n",tolower('8'));
  printf("$ is converted to %c \n",toupper('$'));
  	
  	
  	
  	
  	
  }
