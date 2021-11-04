#include<stdio.h>
#include<math.h>


  main()
  {
  int choose;
  printf("enter 1---------->camera\n");
  printf("enter 2---------->gps\n");
  
  printf("enter your choice \n");
  scanf("%d",&choose);
  
  switch(choose)
  {
  	
  case 1:
  
    printf("enter 1---------->front\n");
    printf("enter 2---------->bottom\n");
    
    printf("enter your choice \n");
    scanf("%d",&choose);
     switch(choose)
     {
     	case 1:
     		    printf("enter 1---------->on\n");
                printf("enter 2---------->off\n");
    
                printf("enter your choice \n");
                scanf("%d",&choose);
     		switch(choose)
             {
     	     case 1:
     		  printf("front camera on\n");
     		
     		   break;
     	     case 2:
     	    
     	      printf("front camera off\n");
     	    
     	       break;
     	   
			 default:
                 printf("you made wrong\n");
              break;	  	     	
	 
	          }
	          
     	case 2:
     		    printf("enter 1---------->on\n");
                printf("enter 2---------->off\n");
    
                printf("enter your choice \n");
                scanf("%d",&choose);
     	switch(choose)
             {
     	     case 1:
     		  printf("bottom camera  on\n");
     		
     		   break;
     	     case 2:
     	    
     	      printf("bottom camera  off\n");
     	    
     	       break;
     	    default:
                 printf("you made wrong\n");
              break;
    	 
	         }
           
		
		
	     
	   }
     
  
  case 2:
  printf("you chose gps\n");
  
  printf("enter 1---------->on\n");
  printf("enter 2---------->off\n");
  
  printf("enter your choice \n");
  scanf("%d",&choose);
     switch(choose)
     {
     	
     	case 1:
     		printf("gps on\n");
     	break;
     	
     	case 2:
     		printf("gps off\n");
     	break; 
     
     	
	 }
     
    
   	
  	
  default:
  printf("you made wrong\n");
  break;	
 	
   } 
  	
  }
