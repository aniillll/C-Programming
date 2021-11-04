#include<stdio.h>
#include<stdlib.h>
 void bubbleSort(int *arr,int size);
 void selectsort(int *jarr,int size);
 void operand(int *pp,int size);
 main()
 {
 int a[10],i;
 for(i=0;i<10;i++)
 {
 	*(a+i)=rand()%26+5;
 	printf("%d,",*(a+i));
 	
 }
 bubbleSort(a,10);
 printf("\n bubble sort \n");
  for(i=0;i<10;i++)
 {
 	printf("%d,",*(a+i));
 	
 }
 selectsort(a,10);
  printf("\n select sort \n");
    for(i=0;i<10;i++)
 {
 	printf("%d,",*(a+i));
 	
 }
 operand(a,10);
 
 
 
 
 
 
 
 }
 void bubbleSort(int *arr,int size)
 {
 	int i,j,temp;
 	for(i=0;i<size;i++)
 	{
 	  for(j=1;j<size-i;j++)	
 	  {
 	  	if(*(arr+j-1)>*(arr+j))
 	  	{
 	  		temp=*(arr+j);
 	  		*(arr+j)=*(arr+j-1);
 	  		*(arr+j-1)=temp;

		   }
       }
       
	 }
 }
 void selectsort(int *jarr,int size)
 {
 	int i,j,minindeks,temp;
 	for(i=0;i<size;i++)
 	{
 		minindeks=i;
 	  for(j=i;j<size;j++)
	  {
	   	if(*(jarr+j)<*(jarr+minindeks))
	   	 {
	   		 minindeks=j;
		 }
		  
	   	
	  }	
 	  temp=*(jarr+i);
	   *(jarr+i)= *(jarr+minindeks);
	   *(jarr+minindeks)=temp;
	 }
 	
 	
 }
 void operand(int *pp,int size)
 {
    bubbleSort(pp,size);
 	int i,counter,frequency=0,j;
 	printf("\n pp\n");
 	for(i=0;i<size;i++)
 	printf("%d,",*(pp+i));
 	
	 for(i=0;i<size;i++)
	 {
	 counter=0;	
	   for(j=i;j<size;j++)
	   {
	   	if(*(pp+j)==*(pp+i))
	   	if(counter<frequency)
	   	{
	   		frequency=counter;
	   	counter++;	
		   }
		   }	
	 	
	 }
 printf("\n result is  %d\n,",frequency);	
 }
