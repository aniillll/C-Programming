#include<stdio.h>
     //say� tekse ortadaki say�y� bul say� �iftse ortadaki iki say�n�n ortalamas�n� yaz.
 main()
 {
 	int number,number1,i,x;
	 double sum=0;
 	
 	printf("enter number\n");
 	scanf("%d",&number);
 	
 	number1=number;
 	//ka� basamakl� onu ��rendim
 	for(i=0;number1!=0;i++)
 	{
 		
 	number1=number1/10;	
 			
	 }
	 x=i;
	 printf("i=%d\n\n",i);
	
	 //basamak say�s� �ift ise
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
 	  printf("ortanc� say�n�n ortalamas� %lf\n\n",sum);
	 }
	 	
	 
	 //basamak say�s� tek ise
    else
    {
    	
          for(i;i-1>x/2;i--)
	 	   {
	 		
	     	number=number/10;	
	 		
	 		
		   }
	 
	number=number%10;		
 	printf("ortanc� say� %d",number);	
    	
    	
	}
 	
 	
 }
