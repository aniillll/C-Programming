#include<stdio.h>

void cubebyreferance(int x,int *yptr);
main()
{
int cube=0,counter=5;	// counter ý aynen gönderdiðimiz için fonk bittikten sonra da deðeri deðiþmedi call by value
                           //  cube  nin adresini fonk içinde ki fonk gönderdiðimiz için deðeri sonra deðiþti call by referance 
	
cubebyreferance(counter,&cube);	
printf("cube =%d   counter =%d",cube,counter);	
	
}
cubebyreferance(int x,int *yptr)
{
	
	(*yptr)=x*x*x;
}
