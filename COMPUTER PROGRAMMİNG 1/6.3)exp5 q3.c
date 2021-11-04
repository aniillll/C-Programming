#include<stdio.h>
#include<math.h>

 main()
 {
 int number,factorial=1,x,a;
 double sum=0.0;
 printf("enter  x\n");
 scanf("%d",&x);
 
 for(number=1;number<=7;number++)
 {
 	
 	factorial=factorial*number;
 	
 	if(number%2==1)
 	{
 	sum=sum+pow(-1,number+1)*pow(x,number)/(double)factorial;	
 		
 	
	 }
	 
	 }	
 	 	
 	printf("sum=%lf",sum);
 	
 	
 	
 	
 	
 	
 	
 }
