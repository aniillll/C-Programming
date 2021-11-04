#include <stdio.h>
#define MAX 50
 void bubbleSort(int *arr,int size);
main()
{
  int a[MAX];
  int i,size;
  printf("enter arrey size\n");
  scanf("%d",&size);
  for(i=0;i<size;i++)
  {
      printf("enter arrey arrey value\n");
      scanf("%d",&a[i]);	
  	
  } 
  bubbleSort(a,size);
  for(i=0;i<size;i++)
  {
  	
  	printf("a[%d] =%d \n",i,a[i]);
	  }	
	
}
  void bubbleSort(int arr[],int size)
  {
  	int i,j,temp;
  	 for(i=0;i<size;i++)
  	 {   
  	    for(j=1;j<size-i;j++)
  	     {
  	        if(arr[j-1]>arr[j])	
  	     	  {
			    temp=arr[j];
			    arr[j]=arr[j-1];
			    arr[j-1]=temp;
			
			
			  }
	     }
  	   	
	 }
  }
