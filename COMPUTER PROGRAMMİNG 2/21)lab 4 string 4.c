#include<stdio.h>
#include<string.h>
 main()
 {
 char a[200]="In large-scale environments, robots should have proper internal representation of the surroundings for achieving tasks such as localization, navigation, and exploration. ";
 
 char *aptr;
  
  aptr=strtok(a," .,");
  
  while(aptr!=NULL)
  {
  	if(*(aptr)=='r' || *(aptr)=='R')
  	{
  	 printf("%s \n",aptr);
	 	
	  }
	aptr=strtok(NULL," .,") ;
  }
 	
	
 }
