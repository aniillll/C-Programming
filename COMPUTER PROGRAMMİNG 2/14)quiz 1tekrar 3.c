#include<stdio.h>
#include<stdlib.h>
 int median(int *arr,int *ort,int size);
 main()
 {
 int a[15],med[5],i,j,temp,result;
 for(i=0;i<15;i++)
 a[i]=rand()%25;	
 
  
 for(i=0;i<15;i++)
 {
 	for(j=1;j<15-i;j++)
 	{
 	 if(*(a+j-1)>*(a+j))
	  {
	  	temp=*(a+j);
	  	*(a+j)=*(a+j-1);
	  	*(a+j-1)=temp;
	  }	
 		
	 }
 }
 for(i=0;i<15;i++)
 printf("%d,",*(a+i));
 	
  result=median(a,med,15);	
  printf("\n resultis %d",result);
 }
  int median(int *arr,int *ort,int size)
  {
  	int i,j=0,sum=0;
  	for(i=0;i<15;i++)
  	{
  	 if(i%3==1)
  	 {
  	 	*(ort+j)=*(arr+i);
  	 	 sum=sum+*(ort+j);
  	 	j++;
  		
	   }
  		
  		
	  }
  	
  	
  	return sum;
  }

