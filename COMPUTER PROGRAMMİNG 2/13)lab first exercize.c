#include<stdio.h>
#include<stdlib.h>
  void printtarreyindex(int *,int);
  void printtarreyoffset(int *,int);
  
main()
{
	int numbers[10];
	int i;
	 for(i=0;i<10;i++)
	 {
	 numbers[i]=rand()%10;	
	 	
	 }
 printtarreyindex(numbers,10);
 printtarreyoffset(numbers,10);	 
}
  void printtarreyindex(int *a,int size)
  {
  	int cnt; // counter
  	 for(cnt=0;cnt<size;cnt++)
  	 {
  	 	printf("a[%d]= %d\n",cnt,a[cnt]);
  	 	
     }
  }
    void printtarreyoffset(int *aptr,int size)
    {
    int offset;
	  for(offset=0;offset<size;offset++)
	  {
	  	printf("%d\n",*(aptr+offset));
	  	
	  	
	  }	
    	
    	
	}
  
