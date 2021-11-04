#include<stdio.h>
#include<stdlib.h>
#define SIZE 30
 int count(const int *array,const int size,const int operand);
main()
{
  int a[SIZE],*sptr;
  int sorted[30]={0};
  sptr=sorted;
  int i,j,temp,result;
  int counter=0;
  int frequency=0,operand;
     printf("a arrey\n");
     for(i=0;i<SIZE;i++)
     {
     a[i]=rand()%10;	
     printf("%d ,",a[i]);
	 }
	 
	 
	   for(i=0;i<SIZE;i++)
	   {
	     for(j=1;j<SIZE-i;j++)
	     {
	     	if(a[j-1]>a[j])
	     	{
	     	 temp=a[j];
			  a[j]=a[j-1];
			  a[j-1]=temp;	
			 }
	     	
		 }
	   }
	  printf("\n sorted arrey \n"); 
	 for(i=0;i<SIZE;i++)
     {	
     
     sorted[i]=a[i];
     printf("%d ,",sorted[i]);
	 }

 for (i = 0; i < SIZE; ++i) {
  int counter = 0;
  for (j = 0; j < SIZE; ++j)
   if (sorted[j] == sorted[i])
    ++counter;
  if (counter > frequency) {
   frequency = counter;
   operand= sorted[i];
  }
 }
 
result= count(sptr,SIZE,operand);
 printf("\n oprerand = %d \n", operand);
 
 printf("result is %d",result);	 

}
  int count(const int *array,const int size,const int operand)
  {
   int counter=0 ,frequency=0,j; 	
          for (j = 0; j< size; ++j)
          {
          	if (*(array+j)==operand) // into function ý used pointer offset notasion
            frequency++;
	      }
                return frequency; 
   }
 	

