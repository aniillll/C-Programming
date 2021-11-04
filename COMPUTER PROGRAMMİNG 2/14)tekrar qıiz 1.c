#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
 void bubbleSort(int *arr,int size); 
 int operand(int *arr,int size);
 double medyan(double  *arr,double size);
 main()
 {
  int a[SIZE];
  int i;
  for(i=0;i<SIZE;i++)
  {
  	printf("enter *(a+%d)",i);
  	scanf("%d",(a+i));
  	
	  }	
   for(i=0;i<SIZE;i++)
  {
  	printf("%d,",a[i]);
	  }	
   bubbleSort(a,SIZE);
 	printf("\n after function\n");
 	for(i=0;i<SIZE;i++)
  {
  	printf("%d,",a[i]);
	  }
	operand(a,SIZE);
	  printf("\n result is %d",operand(a,SIZE));
	medyan(a,10);
	printf("medyan is %lf",medyan(a,10));	
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
  int operand(int *arr,int size)
  {
  	bubbleSort(arr,10);
  	int i,j,counter,frequency=0,operand;
  	for (i = 0; i < SIZE; ++i) {
  int counter = 0;
  for (j = 0; j < SIZE; ++j)
   if (arr[j] == arr[i])
    ++counter;
  if (counter > frequency) {
   frequency = counter;
   operand= arr[i];
  }
 }
  	
  	return operand;
  	
  }
  double medyan(double *arr,double size)
  {
  	double med;
  	int i;
  	bubbleSort(arr,10);
  	for(i=0;i<size;i++)
  	{
  	  if((10%2)==1)
		{
		 
		 med=*(arr+i);
			
			
			}	
  		else
  		{
  			
  		med=(*(arr+i+1)+*(arr+i+1))/2;	
  			
		  }
  		
  		
  		
	  }
  	
  	return med;
  	
  	
  }

