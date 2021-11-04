w#include<stdio.h>
#include<math.h>
 void convert(double h,double j,double k,double *rptr,double *bptr,double *tptr);
main()
{
  double x,y,z,r,b,t; // r=r(first cordinate in order spherical cordinate)  b=beta(mid cordinate in order spherical cordinate) t=teta(last cordinate in orderspherical cordinate)	
  printf("enter x,y,z value");
  scanf("%lf %lf %lf",&x,&y,&z);
  printf("before called function \n");
  printf("x=%lf,y=%lf,z=%lf,r=%lf,b=%lf,t=%lf\n\n",x,y,z,r,b,t);
  convert(x,y,z,&r,&b,&t);
  printf("after called function \n");
  printf("x=%lf,y=%lf,z=%lf,r=%lf,b=%lf,t=%lf\n",x,y,z,r,b,t);
  
	
}

   void convert(double h,double j,double k,double *rptr,double *bptr,double *tptr)
   {
   	(*rptr)=sqrt((h*h)+(j*j)+(k*k));
   	(*bptr)=atan(sqrt((j*j)+(h*h))/(k));
   	(*tptr)=atan(h/j);
   	
   }

