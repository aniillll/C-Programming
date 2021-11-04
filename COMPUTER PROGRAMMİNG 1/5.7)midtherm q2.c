#include<stdio.h>
#include<math.h>
 // make reverse  12345=54321
 main()
 {
 int number,number1,i;
 int sum=0;
 
  printf("enter number\n");
  scanf("%d",&number);
  number1=number;
   for(i=-1;number1!=0;i++)
   {
   	number1=number1/10;
   		
   }
   printf("i=%d\n",i);
   
        for(i;number!=0;i--)
       {
    	printf("i=%d\n",i);
   	    sum=sum+((number%10)*(pow(10,i)));
        number=number/10;
	   }	
 	
 	printf("sum=%d",sum);
 	
 	
 	
 	
 	
 	
 	
 }
