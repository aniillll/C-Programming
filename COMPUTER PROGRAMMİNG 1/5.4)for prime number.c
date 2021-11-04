#include<stdio.h>

  main()
  {
  	int i,number,flag=0;
  	printf("enter number to find prime or not:\n");
  	scanf("%d",&number);
  	
  	for(i=2;i<
	  number;i++)
  	{
  		if(number%i==0)
  		{
  		flag=1;
		  break;	
  			
  			
		  }
  	
	  }
  	
  	if(flag==0)
  	{
  		printf("prime number");
	  }
  	else
  	{
  		printf("not prime  number");
	  }
  	
  	
  	
  	
  }
