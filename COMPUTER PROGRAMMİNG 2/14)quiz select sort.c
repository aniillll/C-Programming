#include<stdio.h>
#include<stdlib.h>
#define SIZE  10
 void selectSort(int *arr,int size );
 main()
 {
 int numbers[SIZE];	
 int i;
 for(i=0;i<SIZE;i++)
 {
 *(numbers+i)=rand()%21;
 printf("%d,",*(numbers+i));	
 }
 selectSort(numbers,SIZE);
 	printf("\n after function\n");
 for(i=0;i<SIZE;i++)
 {

 printf("%d,",*(numbers+i));	
 }	
 } 
 void selectSort(int *arr,int size)
 {
 	int i,j,maxindeks,temp;
 	for(i=0;i<size;i++)
 	{
 		maxindeks=i;
 	  for(j=i;j<size;j++)
	   {
	   	if(*(arr+j)<*(arr+maxindeks))
	   	{
	   		
	   	maxindeks=j;	
		  
		   }

		   }	
 	  temp=*(arr+i);
 	  *(arr+i)=*(arr+maxindeks);
 	  *(arr+maxindeks)=temp;	
	 }
 	
 	
 }
