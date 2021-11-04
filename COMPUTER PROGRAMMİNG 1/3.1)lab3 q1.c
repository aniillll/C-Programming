#include<stdio.h>
#include<math.h>

 main()
 {
 	
   double total_grade,midtherm,final,homework,lab;
   printf("enter midtherm,final,homework,lab grades");
   scanf("%lf%lf%lf%lf",&midtherm,&final,&homework,&lab);
   
   	total_grade=(20*midtherm+40*final+10*homework+30*lab)/100;
   	
   	if(total_grade>60)
 	{
 	printf("you  pass ");	
	 }
 	else
 	{
 	printf("you don't pass ");	
 		
	 }
 	
 	
 	
 	
 	
 	
 
 }
