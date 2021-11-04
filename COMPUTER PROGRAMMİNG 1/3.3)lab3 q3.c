#include<stdio.h>
#include<math.h>
#define PI 3.14

 main()
 {
 	
  double x,q1,q2,q3,q4;
  
   printf("enter x value\n");
   scanf("%lf",&x);
   
     q1=sqrt(25)+(pow(x,3)+4)/exp(2);
     printf("x=%lf----q1=%lf\n",x,q1);
    
     q2=(fabs(pow(x,2)+3*x-10))/log(x);
     printf("x=%lf----q2=%lf\n",x,q2);
 
 	 q3=(pow(sin((PI*x)/180),2)-20)/(cos((PI*x)/180));
 	 printf("x=%lf----q3=%lf\n",x,q3);
 
     q4=log10(1000)/log2(8*x);
     printf("x=%lf----q4=%lf\n",x,q4);
 }
