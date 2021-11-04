#include<stdio.h>
#include<math.h>


  main()
  {
  int choose;
  double result;
  double a,b;
  printf("enter 1---------->sum\n");
  printf("enter 2---------->minus\n");
  printf("enter 3---------->divide\n");
  printf("enter 4---------->multiply\n");
  printf("enter your chooise to calculate progress\n");
  scanf("%d",&choose);
  
  switch(choose)
  {
   case 1:
   	printf("enter a and b value \n");
   	scanf("%lf%lf",&a,&b);
  result=a+b;
  printf("result is %lf",result);
   break;
 
   case 2:
   	 printf("enter a and b value \n");
   	scanf("%lf%lf",&a,&b);
  result=a-b;
  printf("result is %lf",result);
   break;
  
  
    case 3:
    	 	printf("enter a and b value \n");
   	scanf("%lf%lf",&a,&b);
  result=a/b;
  printf("result is %lf",result);
   break;
  
    case 4:
    	 	printf("enter a and b value \n");
   	scanf("%lf%lf",&a,&b);
  result=a*b;
  printf("result is %lf",result);
   break;
   
   default:
   	printf("you do wrong again try\n");
   	break;
  	
  
  }
  	
  	
  	
  	
  	
  	
  	
  	
  }
