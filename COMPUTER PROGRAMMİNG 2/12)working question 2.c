#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
#define length 30
 void selectSort(int *arr,int size);
main()
{
   int	a[SIZE]={},sorted[length]={};
  
   int i;
   for(i=0;i<SIZE;i++)
   {
   	   a[i]=rand()%10;
   printf("%d,",a[i]);
   
   }

   
   selectSort(a,SIZE);
   printf("\n");
   
   for(i=0;i<length;i++)
   {
   	sorted[i]=a[i];
	printf("%d ,",sorted[i]);
   	
   }
	
}
  void selectSort(int *arr,int size)
  {
  	int i,j,maxindeks;
  	 for(i=0;i<size;i++)
  	  {
  	  	maxindeks=i;
  	  	 for(j=i;j<size;j++)
  	  	 {
  	  	    if(*(arr+j)>*(arr+maxindeks))
  	  	    {
  	  	     maxindeks=j;	
				}
	     }
  	  	
  	  	int temp;
  	  	temp=*(arr+i);
  	  	*(arr+i)=*(arr+maxindeks);
  	  	*(arr+maxindeks)=temp;
      }
  	
  	
  	
  }
