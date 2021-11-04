#include<stdio.h>
#include<math.h>

 main()
 {
 	int number,number1;
 	int sum,i;
 	
 	printf("enter number\n");
 	scanf("%d",&number);
 	number1=number;
 	for(i=-1;number1!=0;i++)
 	{
 		
 		number1=number1/10;
 		
	 }
	 printf("i=%d\n",i);
 	
 	while(number!=0)
 	{
 		number=number%10;
 		
 	sum=sum+number*pow(2,i);	
 		
 		
 	number=number/10;
 		  
	 }
 	
 	printf("sum=%d\n",sum);
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 }
