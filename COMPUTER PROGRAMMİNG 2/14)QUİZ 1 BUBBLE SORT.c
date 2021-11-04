#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
  main()
  {
  	int SIZE,i,j,temp;
  	printf("enter size's value \n");
  	scanf("%d",&SIZE);
  	int a[SIZE],sorted[SIZE];
  	
  	 for(i=0;i<SIZE;i++)
  	 {
  	 printf("enter *(a+ %d)",i);
	 scanf("%d",&*(a+i));
	 	
	
	  }
	  for(i=0;i<SIZE;i++)
	  {
	  	for(j=1;j<SIZE-i;j++)
	  	{
	  	  if(*(a+j-1)>*(a+j))
			{
			 temp=*(a+j);
			 *(a+j)=*(a+j-1);
			 *(a+j-1)=temp;	
			 }
		 }
      }
	  
	  
	  printf("\nsorted\n");
  	  	 for(i=0;i<SIZE;i++)
  	 {
  	 printf("%d,",*(sorted+i)=*(a+i));
	 	
	
	  }
  	
  	
  	
  	
  	
  	
  	
  }
