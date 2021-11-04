#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 /* void calculate(int *aptr,int *bptr,int *cptr);
 main()
 {
 int a[3],b[3],c[3];
 int i;
 for(i=0;i<3;i++)
 {
   printf("enter *(a+%d) and *(b+%d)",i,i);
   scanf("%d %d",(a+i),(b+i));
	
 }
 calculate(a,b,c);	
 	for(i=0;i<3;i++)
 	{
 	printf("%d,",*(c+i));	
 		
	 }
	
 }
 void calculate(int *aptr,int *bptr,int *cptr)
 {
 
 	*(cptr)=(*(aptr+1))*(*(bptr+2))-(*(aptr+2))*(*(bptr+1));
 	*(cptr+1)=(*(aptr+2))*(*(bptr+0))-(*(aptr+0))*(*(bptr+2));
 	*(cptr+2)=(*(aptr+0))*(*(bptr+1))-(*(aptr+1))*(*(bptr+0));
 	
 }

 void aritmetic(int a1,int l,int *arr,int size);
 main()
 {
     int a[20]={0},a1,d,i;
     for(i=0;i<20;i++)
      printf("%d,",*(a+i));
 
      printf("\nenter first component a1,and diffrecence d \n");
      scanf("%d %d",&a1,&d);
    aritmetic(a1,d,a,20);
    printf("\nsequence\n");
	for(i=0;i<20;i++)
	{
	printf("%d,",*(a+i));	
		
	}
 }
 void aritmetic(int a1,int l,int *arr,int size)
 {
 int i;
 for(i=0;i<size;i++)
 {
   *(arr+i)=a1+l*(i);
 	

 	
	 }	
 	
 	
 	
 	
 	
 }
  */
  #define SIZE 20
  void bubblesort(int *a,int size);
  int med(int *arr,int size);
  main()
  {
  	int a[SIZE];
  	int i,operand,counter=0,frequency=0,j;
  	for(i=0;i<SIZE;i++)
  	{
  		
  	*(a+i)=rand()%10;
  	printf("%d,",*(a+i));
  		
	  }
  	bubblesort(a,SIZE);
  	printf("\nsorted\n");
  	for(i=0;i<SIZE;i++)
  	{
  		printf("%d,",*(a+i));	
	  }
    for(i=0;i<SIZE;i++)
    {
    counter=0;
	for(j=0;j<SIZE;j++)	
	{
		if(*(a+i)==*(a+j))
		{
			counter++;
			if(counter>frequency)
			{
				frequency=counter;
				operand=*(a+j);
				
			}
			
		}
		
		
	}
    
	}
	printf("\noperand = %d \n",operand)	;
  }
  int med(a,SIZE);
  void bubblesort(int *a,int size)
  {
  	
  	
  	
  	int i,j,temp;
  	for(i=0;i<size;i++)
  	{
  	  for(j=1;j<size-i;j++)	
  	  {
  	  	if(*(a+j-1)>*(a+j))
  	  	{
  	  	temp=*(a+j);
		*(a+j)=*(a+j-1);
		*(a+j-1)=temp;
  	  		
			}
  	  	
  	  	
		}
  		
  		
	  }
  }
  int med(int *arr,int size)
  {
  bubblesort(arr,size);	
  	
  	
  	
  	
  	
  }
