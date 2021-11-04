#include<stdio.h>
#include<stdlib.h>
 main()
 {
 	int a[10],sorted[10],minindeks,temp;
    int i,j;
    for(i=0;i<10;i++)
    {
      	*(a+i)=rand()%10;
      	printf("%d ,",a[i]);
	
	}
 	
 	for(i=0;i<10;i++)
 	{
 	  minindeks=i;
	    for(j=i;j<10;j++)	
	    {
	    	if(*(a+j)<*(a+minindeks))
	    	{
	    		minindeks=j;
         	}
      	}
	     temp=*(a+i) ;
	     *(a+i)=*(a+minindeks);
	   	 *(a+minindeks)=temp;
	    	
	 }
	 printf("\n sorted arrey \n");
	 for(i=0;i<10;i++)
	 {
	 *(sorted+i)=*(a+i);
	 printf("%d,",*(sorted+i));	
	
	 	
	 }
	 
   for(i=0;i<10;i++)
   {
   	
   	
   	
   }
 	
	
 }
