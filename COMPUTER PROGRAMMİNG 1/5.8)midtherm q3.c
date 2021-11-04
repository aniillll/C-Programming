#include<stdio.h>

 main()
 {
 int number1,number2,i,flag;
 
 printf("enter number1 and number 1 to find greteaset divider\n");
 scanf("%d%d",&number1,&number2);
 
  for(i=0;i<=number1,i<=number2;i++)
  {
  	
  	if((number1%i)==0 && (number2%i==0))
  	{
  		flag=i;
  		printf("i=%d",i);
	  }
  	
  	
	  }	
 	
 	printf("greatest divider of %d and %d equal to%d\n",number1,number2,flag);
 	
 	
 	
 	
 	
 	
 }
