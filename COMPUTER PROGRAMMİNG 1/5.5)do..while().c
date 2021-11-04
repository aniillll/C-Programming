#include<stdio.h>

 main()
 {
 	int sum=0,number;
 	
 	do
 	{
 	printf("enter number to sum or leave enter -1\n");
	 scanf("%d",&number);	
 		
 		
 	sum=sum+number;	
 		
 		
	 }
 	while(number!=-1);
 	
 	printf("sum=%d",sum);
 	
 	
 	
 }
