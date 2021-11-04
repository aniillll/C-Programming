#include<stdio.h>
#include<stdlib.h>
main()
{
	int numbers[10],i,*numbersptr;
	numbersptr=numbers;
	 for(i=0;i<10;i++)
	 {
	 	numbers[i]=rand()%10;
	 }

	 for(i=0;i<10;i++)
	 {
	 	printf("%3d",numbers[i]);
	 	printf("%20x ",&numbers[i]);
	 	printf("%20x",numbersptr+i);
	 	printf("%3d \n",*(numbersptr+i));
	 	
	 	
	 	
	 }	 
	
	
}
