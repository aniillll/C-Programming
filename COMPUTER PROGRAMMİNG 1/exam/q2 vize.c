#include<stdio.h>


  main()
  {
  	
  	int number,i=0,j=0,copy_number,left_sum=0,right_sum=0,remainder;
  	printf("enter number\n");
  	scanf("%d",&number);
  	copy_number=number;
  	while(number!=0)
  	{	
  		number=number/10;
  		i++;
	  }
  	
  	printf("i=%d\n\n",i);
  	
  	if(i%2==0)
  	{
  	printf("the number isnot balance\n");	
  		
  		
	  }
  	else
  	{
  		
  	while(j<i/2)
	  {
	  	remainder=copy_number%10;
	  	right_sum=right_sum+remainder;
	  	copy_number=copy_number/10;
	  	j++;
		  }
		  printf("right sum =%d\n",right_sum);
		copy_number=copy_number/10;
		 j+=2; 
		 printf("copy number = %d\n",copy_number);
		 printf("i=%d\n",i);
		 printf("j=%d\n",j);	
  	
	  while(j<=i)
	  {
	  	remainder=copy_number%10;
	  	left_sum=left_sum+remainder;
	  	copy_number=copy_number/10;
	  	j++;
		  }	
		  printf("left sum %d\n",left_sum);
  	 if(left_sum==right_sum)
	   {
	   	printf("the number is balance\n");
		   }
		else
		{
			printf("the number isnot balance\n");
		}
  		
	  }
  	
  	
  	
  	
  	
  }
