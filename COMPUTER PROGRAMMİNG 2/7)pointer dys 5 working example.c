#include<stdio.h>
#include<math.h>
 double example(int x,int *yptr,int z);
main()
{
   int count=5,square,cube;
   double nominal;
   printf("before function \n");
   printf("%d is count value %p is count adress \n",count,&count);
   printf("%d is cube value %p is cube adress \n",cube,&cube);
   printf("%d is square value  %p is square adress \n",square,&square);
   printf("%lf is nominal value  %p is nominal adress \n",nominal,&nominal);
   nominal=example(count,&cube,square);
   printf("after function \n");
   printf("%d is count value %p is count adress \n",count,&count);
   printf("%d is cube value %p is cube adress \n",cube,&cube);
   printf("%d is square value  %p is square adress \n",square,&square);
   printf("%lf is nominal value  %p is nominal adress \n",nominal,&nominal);
}
 double example(int x,int *yptr,int z)
 {
 (*yptr)=x*x*x;
 z=x*x;

 return sqrt(z);
 	
 	
 	
 }
