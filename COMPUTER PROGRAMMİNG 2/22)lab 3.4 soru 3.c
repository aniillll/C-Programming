#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
 main()
 {
 char passaport[11];
 int i=0;
 for(i;i<10;i++)
 {
 passaport[i]=rand()%94+33;
	
 }
 	
 passaport[i]='\0';	
 printf("%s",passaport);	
 	
 	
 	
 	
 	
 }
