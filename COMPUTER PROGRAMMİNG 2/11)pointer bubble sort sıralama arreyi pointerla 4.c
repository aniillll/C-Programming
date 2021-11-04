#include<stdio.h>
#define SIZE 10
 void bubbleSort(int *arr,int size);
 void swap(int *elemet1,int *element2);
main()
{
    int a[SIZE]={10,30,8,79,45,67,89,14,117,1};
    int i;
    printf("before call function \n");
      for(i=0;i<SIZE;i++)
      {
      	printf("a[%d]=%d \n",i,a[i]);	
	  }
    
    bubbleSort(a,SIZE);	
    // diziyi adress olarak fonksiyondaki pointer a gönderdik
    // call by referance yaptýk deðerlerin fonk sonra deðiþmesi için
    printf("\n after call function \n");
      for(i=0;i<SIZE;i++)
      {
      	printf(" a[%d]=%d \n",i,a[i]);	
	  }    
	
}
   void bubbleSort(int *arr,int size)
   {
   	int i,j;
   	  for(i=0;i<size;i++)
   	  {
   	  	for(j=0;j<size-i;j++)
   	  	  {
   	  	  	if(arr[j-1]>arr[j])
   	  	  	{
   	  	  	 swap(&arr[j-1],&arr[j]);	
   	  	  		
			}
		  }
   	  	
	  }
	
   }
   void swap(int *elemet1,int *element2)
   {
   	int temp;
   	temp=(*element2);
   	*element2=*elemet1;
   	*elemet1=temp;
   }
