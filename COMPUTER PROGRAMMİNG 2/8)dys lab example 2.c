#include<stdio.h>
 
 void calculatenextpose(double *poseptr,double v,double I);

main()
{
   double pose=0,velocity=200,interval=1;	

   printf("pose before function %lf \n",pose);
   printf("velocity before function %lf \n",velocity);
   printf("interval before function %lf \n",interval);
   
 calculatenextpose(&pose,velocity,interval);
   printf("pose after function %lf \n",pose);
   printf("velocity after function %lf \n",velocity);
   printf("interval after function %lf \n",interval);
	
return 0;
}

  void calculatenextpose(double *poseptr,double v,double I)
  {
  	
  (*poseptr)=(*poseptr)+v*I;
  }
