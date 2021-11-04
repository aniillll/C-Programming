#include<stdio.h>
     //sayı tekse ortadaki sayıyı bul sayı çiftse ortadaki iki sayının ortalamasını yaz.
 main()
 {
 	int number,number1,i,x;
	 double sum=0;
 	
 	printf("enter number\n");
 	scanf("%d",&number);
 	
 	number1=number;
 	//kaç basamaklı onu öğrendim
 	for(i=0;number1!=0;i++)
 	{
 		
 	number1=number1/10;	
 			
	 }
	 x=i;
	 printf("i=%d\n\n",i);
	
	 //basamak sayısı çift ise
	 if(i%2==0)
	 {
	 	
	 	 for(i;i-1>x/2;i--)
	 	{
	 		
	 	  number=number/10;		
		 }
		 printf("number=%d\n\n",number);	
		     
			 for(i=1;i<=2;i++)
		     {
		 	sum=sum+number%10;
		 	number=number/10;
		     }
	   
	   sum=sum/2;	
 	  printf("ortancı sayının ortalaması %lf\n\n",sum);
	 }
	 	
	 
	 //basamak sayısı tek ise
    else
    {
    	
          for(i;i-1>x/2;i--)
	 	   {
	 		
	     	number=number/10;	
	 		
	 		
		   }
	 
	number=number%10;		
 	printf("ortancı sayı %d",number);	
    	
    	
	}
 	
 	
 }
