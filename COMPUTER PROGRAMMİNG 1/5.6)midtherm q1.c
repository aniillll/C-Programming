#include<stdio.h>

   // seperate number and induvidual sum 12345=1+2+3+4+5
 main()
 {
 int number,i;
 int sum=0;
 
  printf("enter number\n");
  scanf("%d",&number);
   
   for(i=0;number!=0;i++)
   {
   	
   	sum=sum+(number%10);
   	
   	
   	
   	number=number/10;
	   }	
 	
 	printf("sum=%d",sum);
 	
 	
 	
 	
 	
 	
 	
 }
