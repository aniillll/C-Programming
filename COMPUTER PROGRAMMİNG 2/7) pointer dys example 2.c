#include<stdio.h>

void cubebyreferance(int x,int *yptr);
main()
{
int cube=0,counter=5;	// counter � aynen g�nderdi�imiz i�in fonk bittikten sonra da de�eri de�i�medi call by value
                           //  cube  nin adresini fonk i�inde ki fonk g�nderdi�imiz i�in de�eri sonra de�i�ti call by referance 
	
cubebyreferance(counter,&cube);	
printf("cube =%d   counter =%d",cube,counter);	
	
}
cubebyreferance(int x,int *yptr)
{
	
	(*yptr)=x*x*x;
}
