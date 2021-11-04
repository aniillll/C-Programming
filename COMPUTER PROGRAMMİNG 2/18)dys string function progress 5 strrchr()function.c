#include<stdio.h>
#include<string.h>
 main()
 {// strchar fonksiyonununa baktýk
 char *a=" A zoo has many animals including zebra";
 char character1='s';
 char character2='z';
 printf("strchar function :\n");
 if(strchr(a,character1)!=NULL)
 {
 	printf( "%c is found in %s \n",character1,a);
 	printf( " %s \n",strchr(a,character1));
	 
  }	
  else
  {
  printf( "%c is found in %s \n",character1,a);	
	
  }
  // strrchar fonksiyonunda aradýðýmýz harfi en son neredeyse oraya pointerkoyar ve oradan ve ondan sonra bastýrý strrchr(a,character) 
  // fonksiyonu. 
 printf("\n\nstrrchar function shows :\n");	
 if(strrchr(a,character1)!=NULL)
 {
 	printf( " %c is found in %s \n",character1,a);
 	printf( " %s \n",strrchr(a,character1)); 	
 	
 	
 }
  else
  {
  printf( "%c is found in %s \n",character1,a);	
	
  }	
   if(strrchr(a,character2))
 {
 	printf( "\n %c is found in %s \n",character2,a);
 	printf( " %s \n",strrchr(a,character2)); 	
 	
 	
 }
  else
  {
  printf( "%c is found in %s \n",character2,a);	
	
  }	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 }
