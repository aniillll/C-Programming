#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
 void reverse(int *arr,int size);
  main()
  {
  	int a[SIZE]={3,8,55,7,8,9,23,11,90,47};
  	int i;
  	printf("normal function \n");
  	for(i=0;i<SIZE;i++)
  	printf("%d,",a[i]);
  	
  	reverse(a,SIZE);
  	printf("\n reverse function \n");
    for(i=0;i<SIZE;i++)
  	printf("%d,",a[i]);
  }
  void reverse(int *arr,int size)
  {
  int i,j,hold;
   for(i=0,j=9;j<size,i<size/2;i++,j--)
   {
   	 hold=*(arr+j);
   	 *(arr+j)=*(arr+i);
   	*(arr+i)=hold;
	   }	
  	
  }
