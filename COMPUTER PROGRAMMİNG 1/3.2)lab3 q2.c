#include<stdio.h>
#include<math.h>

 main()
 {
 	
   double x,y;
   printf("enter x value");
   scanf("%lf",&x);
   
   if(x<-3)
   {
   	y=(pow(x,3)+4)/pow(x,2);
   	printf("y=%lf",y);
   }
   else if(-2<=x && x<0)
   {
   	y=fabs(pow(x,2)+3*x-10);
   	printf("y=%lf",y);
	   }	
 	
 	else
 	{
 		y=x*x-4*x;
 	printf("y=%lf",y);
	 }
 	
 	
 	
 
 }
