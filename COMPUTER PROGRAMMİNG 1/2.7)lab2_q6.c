#include<stdio.h>
#include<math.h>
#include<stdlib.h>

  main()
  {
     double x_initial,x_final,x_travelled,v,t;
     x_initial=0;
     printf("enter final position of robot and velocity\n");
     scanf("%lf%lf",&x_final,&v);
     x_travelled=x_final-x_initial;
     t=x_travelled/v;
     
     printf("travelled distance=%lf and elapsed time=%lf",x_travelled,t);
  	
  	
  	
  	
  }
