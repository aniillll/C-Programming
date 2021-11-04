#include<stdio.h>
#include<stdlib.h>
#define SIZE 20
 void aritmetic(int *a,int a1,int d,int size);
 main()
 {
 int a[SIZE]={0};
 int i,a1,d;
 printf("\n before function called \n");
 	for(i=0;i<SIZE;i++)
 	{
 		printf("%d ,",*(a+i));
	 }
	 printf("\n enter first component and difference \n");
	 scanf("%d %d",&a1,&d);
 	
 	aritmetic(a,a1,d,SIZE);
 	printf("\n after function called \n");
 	for(i=0;i<SIZE;i++)
 	{
 		printf("%d,",a[i]);
 		
	 }
 }
 void aritmetic(int *a,int a1,int d,int size)
 {
 int i;
 for(i=0;i<size;i++)
 {
 	*(a+i)=a1+d*(i);
 	
 	
 	
	 }	
 	
 	
 	
 	
  } 
