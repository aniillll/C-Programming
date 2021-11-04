// call by value
#include <stdio.h>
void degerdegistir(int a,int b);
main()
{
int x=5 ,y=10;
	
degerdegistir(x,y);	
printf("x = %d y =%d",x,y); 
}
void degerdegistir(int a,int b)
{
 int gecici;
 gecici=a;
 a=b;
 b=gecici;
 printf("x = %d y  =%d \n",a,b);	
	
	
	// x ve y nin fonk bittikten sonra deðeri deðiþmedi çünkü sadece depðerlerini gönderdik x ve y nin
	
	
	
}
