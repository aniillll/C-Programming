#include<stdio.h>
void degisken(int *aptr,int *bptr);
main()
{
 int x=5,y=8;
 

 
 degisken(&x,&y);	
printf("%d \n",x);
printf("%d",y);
}
void degisken(int *aptr,int *bptr)
{
int degisken;
degisken=*aptr;
*aptr=*bptr;
*bptr=degisken;	
	
	
}
