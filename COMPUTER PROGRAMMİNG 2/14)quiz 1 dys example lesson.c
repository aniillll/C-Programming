#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
 void cross(int *a,int *b,int *c,int size);
 main()
 {
 	int a[SIZE],b[SIZE],c[SIZE];
 	int i;
 	for(i=0;i<SIZE;i++)
 	{
 	printf("enter a[%d] and b[%d]",i,i);
 	scanf("%d %d",&a[i],&b[i]);
     }
  cross(a,b,c,SIZE);
 	for(i=0;i<SIZE;i++)
 	{
 	printf("*(a+%d) =%10d \n",i,*(a+i));
 	printf("*(b+%d) =%10d\n",i,*(b+i));
 	printf("*(c+%d) =%10d \n",i,*(c+i));
 	
     }  
  }
  void cross(int *a,int *b,int *c,int size)
  {
  	*(c)=(*(a+1))*(*(b+2))-(*(a+2))*(*(b+1));
  	*(c+1)=(*(a+2))*(*(b+0))-(*(a+0))*(*(b+2));
  	*(c+2)=(*(a+0))*(*(b+1))-(*(a+1))*(*(b+0));
  	
  	
  }
