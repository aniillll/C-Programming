#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
 int largest(int *a,int size);
 main()
 {
 	srand(time(NULL));
 	int a[SIZE]={},i,result;
 	for(i=0;i<SIZE;i++)
 	{
 	 *(a+i)	=rand()%10;
 	 printf("%d,",*(a+i));
 		
	 }
 	result=largest(a,SIZE);
 	printf("\n result =%d \n",result);
 }
 int largest(int *a,int size)
 {
 	int i,max;
 	max=*(a);
 	for(i=1;i<size;i++)
 	{
 		if(*(a+i)>max)
 		{
 		 max=*(a+i);	
			
		 }
	 }
	
 	return max ;
 }

