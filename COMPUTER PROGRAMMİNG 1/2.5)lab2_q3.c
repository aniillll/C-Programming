#include<stdio.h>
#include<math.h>
#include<stdlib.h>

  main()
  {
  	
  int a,b,c;
  int sum1,sum2,sum3;
  a=6;
  b=8;
  c=10;
  sum1=a+b+c;
  printf("way1:sum of three ingeters equal to %d\n",sum1);
  sum2=a;
  sum2=sum2+(b+c);
  printf("way2:sum of three ingeters equal to %d\n",sum2);
  sum2=b;
  sum1=c;
  sum3=a;
  sum3=sum1+sum2+sum3;
  printf("way3:sum of three ingeters equal to %d\n",sum3);	
  	
  	
  	
  }
