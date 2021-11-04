#include<stdio.h>
#include<stdlib.h>
#define SIZE 15
#define LARGE 5
  double median(int *original,int *med,int size,int large);
 main()
 {
   int numbers[SIZE]={37,24,27,35,33,32,28,16,34,36,30,21,29,22,23},med[LARGE]={0};
   int i,j,temp ;
   double result;
    printf("\n ORÝGÝNAL ARREY \n");
 	for(i=0;i<SIZE;i++)
 	{
 		printf("%d,",*(numbers+i));
 		
	 }
     for(i=0;i<SIZE;i++)
     {
  	   for(j=1;j<SIZE-i;j++)
  	    {
  	     if(*(numbers+j-1)>*(numbers+j))
		  {
		    temp=*(numbers+j);
		    *(numbers+j)=*(numbers+j-1);
		    *(numbers+j-1)=temp;	
    	   }	
	     }
     }
     printf("\n sorted arrey \n");
 	for(i=0;i<SIZE;i++)
 	{
 		printf("%d,",*(numbers+i));
 		
	 }
	 
 result=median(numbers,med,SIZE,LARGE);
 	printf("\n median after call function \n");
 	for(i=0;i<LARGE;i++)
 	{
 		printf("%d,",*(med+i));
 		
	 }
	 printf("\nresult is %f",result);
 }
 double median(int *original,int *med,int size,int large)
 {
 	int i,j=0;
	 double mean=0.00;
 	for(i=0;i<size;i++)
 	{
 		if(i%3==1)
 		{
 		*(med+j)=*(original+i);	
 			mean=mean+*(med+j);
 			j++;
		 }
 		
 		
	 }
 	
 	
 	return (double)mean/(double)5.0;
 }
