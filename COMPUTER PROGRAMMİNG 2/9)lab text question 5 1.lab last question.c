#include<stdio.h>
    void response(double R,double C,double *Voptr,double *tptr);
main()
{
  double R,C,Vo,t;
  printf("enter R,C,Vo values \n");
  scanf("%lf %lf %lf",&R,&C,&Vo);
  
  printf("before function \n");
  printf("R=%lf,C=%lf,Vo=%lf\n\n",R,C,Vo);
  
    response(R,C,&Vo,&t);
  printf("after function\n");
  printf("R=%lf,C=%lf,Vo=%lf\n\n",R,C,Vo,t);
	
}
    void response(double R,double C,double *Voptr,double *tptr)
    {
    	double Vt;
    	while((*tptr)>=0)
    	{
    		printf("enter t value or to finish enter -1 \n");
    		scanf("%lf",&(*tptr));
    	Vt=(*Voptr)*exp((-(*tptr)/R*C));
		printf("%lf is naturel response of RC circuit and instantinios time is %lf into function \n\n",Vt,(*tptr));
	
		}    	
	}
