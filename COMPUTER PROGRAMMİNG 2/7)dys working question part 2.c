#include<stdio.h>
#include<math.h>
#define PI 3.14
 double arccos(double *xptr);
 double arcsin(double *xptr);

main()
{
  double a,b,c,x,y;
  printf("enter a value ");
  scanf("%lf",&a);
  printf("enter b value \n");
  scanf("%lf",&b);
  printf("enter c value \n");
  scanf("%lf",&c);	
  x=-(pow(a,2)-pow(b,2)-pow(c,2))/(2*b*c);
  y=(b*(sin(2*(PI)/9))/c);
 arccos(&x);
 arcsin(&y);
 printf("a = %lf \n ",a);
 printf("b = %lf \n ",b);
 printf("c = %lf \n ",c);
 printf("teta is = %lf \n ",arccos(&x));
 printf("beta= %lf \n ",arcsin(&y));
 
 	
}
 double arccos(double *xptr)
 {
  
  return acos(*xptr)*180/PI;
 }
 double arcsin(double *xptr)
 {

 return	asin(*xptr)*180/PI;
 }
