#include <stdio.h>
#include <math.h>
#define PI 3.14
void rotate(int xc,int yc,int a,int *xrptr,int *yrptr);

main()
{
    int xc,yc,a,xr,yr; // xc yc first cordinate a=angle xr yr final position
    
	printf("enter initical cordinates xc and yc and rotating angle a");
	scanf("%d %d %d",&xc,&yc,&a);
	printf("before function called");
	printf("xc = %d ,yc = %d ,angle a = %d",xc,yc,a);
	
	rotate(xc,yc,a,&xr,&yr);
	printf("after function called");
	printf("xc = %d ,yc = %d ,angle a = %d, xr = %d ,yr = %d ",xc,yc,a,xr,yr);
	
}
  void rotate(int  xc,int yc,int a,int *xrptr,int *yrptr)
  {
  	(*xrptr)=(cos((a*PI)/180)*xc)-(sin((a*PI)/180)*yc);
  	(*yrptr)=(sin((a*PI)/180)*xc)-(cos((a*PI)/180)*yc);
	
  }

