#include<stdio.h>

 main()
 {
 int point1=0,point2=0,point3=0,player_id,sum1,sum2,sum3;
 
 printf("enter playerid\n");
 scanf("%d",&player_id);
 
 printf("enter two integer between 1-12\n");
 scanf("%d%d",&sum2,&sum3);	
 	
 	while(point1!=3 || point2!=3 || point3!=3 )
 	{
 		
 	 	
 	switch(player_id)
	 {
	 sum1=sum2+sum3;	
	 case 1:
	  
	   if(sum1==7 || sum1==11)
	   {
	   	
	   	point1++;
	
	   }
	 else if(sum1==2||sum1==3||sum1==12)
	 {
	 	
	 	point1--;
	 	
	 	
	 	
	 }
	 else{
	 	point1=point1+0;
	 }
	    break;	

	 	
	 case 2:
	  sum1=sum2+sum3;
	   if(sum1==7||sum1==11)
	   {
	   	
	   	point2++;
	   }
	 else if(sum1==2||sum1==3||sum1==12)
	 {
	 	
	 	point2--;
	 	
	 	
	 	
	 }
	 else{
	 	point2=point2+0;
	 }	 
	 
	    break;
		
		
	case 3:
	sum1=sum2+sum3;
	   
	    if(sum1==7||sum1==11)
	   {
	   	
	   	point3++;
	   }
	 else if(sum1==2||sum1==3||sum1==12)
	 {
	 	
	 	point3--;
	 	
	 	
	 	
	 }
	 else{
	 	point3=point3+0;
	 }	
	    break;
		
	default:
	printf("players no gain point\n");
		break;	

		 }	
 		
		
	 	
 printf("enter playerid\n");
 scanf("%d",&player_id);
 
 printf("enter two integer between 1-12\n");
 scanf("%d%d",&sum2,&sum3);	
	 	 
 		
	 }
 	
 	
 	if(point1==3)
 	{
 		
 		printf("players 1 win\n");
	 }
 	
 	 else if(point2==3)
 	{
 		
 		printf("players 2 win\n");
	 }
 	
 	 else 
 	{
 		
 		printf("players 1 win\n");
	 }
 	
 	
 	
 	
 	
 	
 	
 	
 	
 }
