#include<stdio.h>
#include<math.h>


  main()
  {
  int choose;
  double result;
  double operand;
  printf("enter 1---------->sine\n");
  printf("enter 2---------->Cosine\n");
  printf("enter 3---------->Tangent\n");
  printf("enter 4---------->Exponential\n");
  printf("enter 5---------->Natural Logarithm\n");
  printf("enter 6----------> Based-10 Logarithm\n");
  
  printf("enter your chooise to calculate progress\n");
  scanf("%d",&choose);
  
  printf("enter operand\n");
  scanf("%lf",&operand);
 
   if(choose==1)
   {
   	 result=sin(M_PI*operand/180);
  printf("result is %lf",result);
   	
   	
   }
  
  else if(choose==2)
  {
  result=cos(M_PI*operand/180);
  printf("result is %lf",result);	
  }
   	 
  else if(choose==3)
  {
   result=tan(M_PI*operand/180);
  
   printf("result is %lf",result);  	
  }

   
  
   else if(choose==4)
   {
   result=exp(operand);
   printf("result is %lf",result);  	
   	
   }
    	 
  else if(choose==5)
  {
  result=log(operand);
  printf("result is %lf",result);  	
  	
  }
   
  else if(choose==6)
  {
  result=log10(operand);
  printf("result is %lf",result);  	
  	
  }      
	else
	{
		
	printf("you do wrong again try\n");	
	}
  
 
  
  }
  	
  	
  	
  	
  	
  	
  	
  	
  }
