#include<stdio.h>
#include<math.h>
 main()
 {
  int number,sum=0,remainder,i=0;
  	
 	
 	printf("enter number to convert decimal\n");
 	scanf("%d",&number);
 	
 	while(number!=0)
 	{
 		
 		remainder=number%10;
 		
 	sum=sum+pow(2,i)*remainder;
 	
 	number=number/10;
	 	
 		
 		
 		
 		i++;
	 }
 	
 	printf("decimal=%d",sum);
 	
 	
 	
 	
 	
 }
