#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#define SIZE 30
 void selectSort(int *a,int size);
  main()
  {
  	int a[SIZE]={},sorted[SIZE]={},i;
  	printf("normal array\n");
  	for(i=0;i<SIZE;i++)
  	{
  	 a[i]=rand()%10;	
  	printf("%d,",a[i]);	
  		
	  }
	  
	selectSort(a,SIZE);
	printf("\nafter call funtion sorted arrey \n");
    for(i=0;i<SIZE;i++)
  	{
  	 	
  	printf("%d,",a[i]);	
  		
	  }


}
  void selectSort(int *a,int size)
  {
  	int i,j,minindeks,temp;
  	for(i=0;i<size;i++)
  	{
  	minindeks=i;
	  for(j=i;j<size;j++)
	  {
	  	if(*(a+j)<*(a+minindeks))
		  {
	  		minindeks=j;
	  		
		  }
	  	
	  	
	  	
	  }	
  	temp=*(a+i);
  	*(a+i)=*(a+minindeks);
  	*(a+minindeks)=temp;
	
	  }
	 	
  }
