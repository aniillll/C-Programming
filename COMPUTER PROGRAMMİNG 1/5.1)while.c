#include<stdio.h>
#include<math.h>

 main()
 {
 	double note,average,total=0;
 	int i=0;

 	while(i<5)
 	{
 	printf("enter note\n");
 	scanf("%lf",&note);	
 	
	 total=total+note;	
 		
 	i++;	
	 }
 	
 	average=total/5;
 	printf("average is%lf",average);
 	
 	
 	
 	
 	
 }
