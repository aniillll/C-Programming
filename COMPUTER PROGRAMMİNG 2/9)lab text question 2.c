#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  void poliminal(int f,int g,int h,int *xptr);
main()
{
     int a,b,c,x;
     a=rand()%8;
     b=rand()%8;
     c=rand()%8;
     x=rand()%8;
     printf("before function a=%d ,b=%d ,c=%d ,x=%d",a,b,c,x);
      poliminal(a,b,c,&x);
     printf("after function a=%d ,b=%d ,c=%d ,x=%d",a,b,c,x);
}
  
  void poliminal(int f,int g,int h,int *xptr)
  {
  	(*xptr)=f*(*xptr)*(*xptr)+g*(*xptr)+h;
  	

  }
