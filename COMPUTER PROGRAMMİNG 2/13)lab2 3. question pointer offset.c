#include<stdio.h>
#include<stdlib.h>
#include<time.h>
  int largest(int *,int);
main()
{
	srand(time(NULL));
 int a[10];
 int i;
  for(i=0;i<10;i++)	
  {
  	a[i]=rand()%10;
  	printf("a[%d]=%d \n",i,a[i]);
  }
  largest(a,10);
  printf("result %d",largest(a,10));

}
  int largest(int *aptr,int size)
  {
  	int i,max;
  	max=*(aptr);
  	 for(i=0;i<size;i++)
  	 {
  	 	if(*(aptr+i)>max)
  	 	{
  	 	max=*(aptr+i);
       
		}
  	 	
	   }

	  
	  
  return max ;
   }
