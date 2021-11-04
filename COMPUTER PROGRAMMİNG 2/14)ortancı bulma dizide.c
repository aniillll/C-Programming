#include<stdio.h>
#include<stdlib.h>
 double median(int *arr,int size);
 main()
 {
 int a[15],i,j,temp;
 double result;
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
 	
  result=median(a,15);	
  
  printf("\n result is %lf",result);
 }
  double median(int *arr,int size)
  {
  	double ort;
  	
  	
  	 if(size%2==1)
  	 {
       ort=*(arr+(size)/2);
  
	   }
	   else
	   {
	   	ort =(*(arr+(size)/2)+*(arr+(size-1)/2))/2.0;
	   	
	   }
  		
  		
	  
  	
  	
  	return ort;
  }

