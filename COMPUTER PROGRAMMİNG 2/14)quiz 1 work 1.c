#include<stdio.h>
#include<math.h>
#define PI 3.14
  void calculate(double a,double b,double c,double *teta,double *fi);
  main()
  {
  	double a,b,c,teta,fi;
  	printf("enter a,b,c value");
  	scanf("%lf %lf %lf",&a,&b,&c);
  	calculate(a,b,c,&teta,&fi);
  	
  	printf("after function called");
  	printf("a=%lf \n",a);
  	printf("b=%lf \n",b);
  	printf("c=%lf \n",c);
  	printf("teta=%lf \n",teta*180/PI);
  	printf("fi=%lf \n",fi);

  	
  	
  }
  void calculate(double a,double b,double c,double *teta,double *fi)
  {
  	double x,y;
  	 x=-((pow(a,2)-pow(b,2)-pow(c,2))/(2*b*c));
  	 y=(b*(sin((40*PI)/180)))/(c);
  	*(teta)=acos(x);
  	*(fi)=asin(y);
  }
