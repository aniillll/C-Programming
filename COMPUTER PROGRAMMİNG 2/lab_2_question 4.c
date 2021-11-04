#include<stdio.h>
#define SIZE 10
  void reverse(int *aptr,int size);
 main()
 {
    int a[SIZE]={1,2,3,4,5,6,7,8,9,0},i;
    for(i=0;i<10;i++)
	printf("%d,",a[i]);
	
	reverse(a,SIZE);
	printf("\n\nreversed arrey\n");
	for(i=0;i<10;i++)
	printf("%d,",a[i]);
	
 }
  void reverse(int *aptr,int size)
  {
  	int i,j;
  	for(i=0,j=9;i<size,j!=-1;i++,j--)
  	{
	aptr[i]=aptr[j];
	
	  }
	  
  }
