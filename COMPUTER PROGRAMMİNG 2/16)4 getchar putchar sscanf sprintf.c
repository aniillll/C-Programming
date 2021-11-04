#include<stdio.h>
#define SIZE 100

 main()
 {

   int c;
   char a[SIZE];
   int i;
   for(i=0;i<6;i++)
   {
   
   	a[i]=getchar();
   	
   	printf(" %c \n",a[i]);
   	
   }
   for(i=0;i<SIZE && getchar() != '\0';i++)
   {
   	putchar(a[i]);
   	printf("\n");
   	
   }

 
 
 
 
 
}

