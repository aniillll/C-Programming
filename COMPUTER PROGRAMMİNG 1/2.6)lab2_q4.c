#include<stdio.h>
#include<math.h>
#include<stdlib.h>

  main()
  {
  	double x;
  	printf("enter value for x\n");
  	scanf("%lf",&x);
  	
	  //first equation
     
     x=45+(x+4)/8;
     printf("first equation:result=%lf\n",x);
    
     //second equation
     x=(pow(x,2)+3*x-10)/(8*pow(x,2)-24);
     printf("second equation:result=%lf\n",x);
  	
  	 //thirth equation
  	 x=((pow(x,2)-20)/(3*x+2))+(x-1)/6;
  	printf("thirth equation:result=%lf\n",x);
  	
  	//forth equation
  	x=(x*x*x)*(x+1)/pow(x-1,2);
  	printf("forth equation:result=%lf\n",x);
  }
