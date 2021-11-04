#include<stdio.h>

  main()
  {
  	double sum=0,average,note,i=0;
  	 
  	 printf("enter grade or -1 to end\n");
  	 scanf("%lf",&note);
  	while(note!=-1)
  	{
  		
  		
  		
  	sum=sum+note;	
  	 
	 printf("enter grade or -1 to end\n");
  	 scanf("%lf",&note);	
  	i++;	
  	
	  }
  //eðer en baþtan bu iþlem yapýlmadý ise	
  if(i==0)
  {
  	printf("no grade enters\n");
  	
  }
  else
  {
  	average=sum/i;
  	printf("average=%lf\n",average);
	  }	
  	
  	
  }
