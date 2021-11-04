#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define SIZE 30
  int counts(const int *const array, const int size, const int operand);

 main()
 {
 	int numbers[SIZE]={},i,sorted[SIZE]={0},j,temp,count,frequency=0,operand;
 	printf("arrey normal\n");
 	for(i=0;i<SIZE;i++)
 	{
 		*(numbers+i)=rand()%10;
 	printf("%d ,",*(numbers+i));	
	 }
	  printf("\n")	;
	for(i=0;i<SIZE;i++)
	{
	  for(j=0;j<SIZE-i;j++)
	  {
	  	if(*(numbers+j-1)>*(numbers+j))
	  	{
	  		
	  	     temp=*(numbers+j);
	  	     *(numbers+j)=*(numbers+j-1);
	  	     *(numbers+j-1)=temp;	
		}
	  }	
	}
	  printf("\nsorted arrey\n");
    for(i=0;i<SIZE;i++)
 	{ 
 	  *(sorted+i)=*(numbers+i);
 	   printf("%d,",*(sorted+i));	
   }
   printf("\n");
   for(i=0;i<SIZE;i++)
   {
   	count=0;
   	 for(j=0;j<SIZE-i;j++)
   {
   	
   	 if(*(sorted+j)==*(sorted+i))
   	 {
   	 	
   	 	count ++;
   	 	if(count>frequency)
   	 	{
   	 		
   	 		frequency=count;
		operand=sorted[i];
			}
		}
  	
   }
   	
   	
   	
   }
 	printf("operand %d",operand);
	
	counts(sorted,SIZE,operand);
	
	printf("\n result is %d",counts(sorted,SIZE,operand));
	
 }
 int counts(const int *const array, const int size, const int operand)
 {
 	int counter=0,i;
 	for(i=0;i<size;i++)
 	{
 		if(*(array+i)==operand)
 		{
 			counter++;
		 }
 		
 		
 		
	 }
 	
 	return counter;
}
