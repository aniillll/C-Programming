#include<stdio.h>
#include<math.h>
void callbyreferance(int *aptr);
main()
{
	int number=5;
	int x=number;
	printf(" x in deðeri %d  x in adresi %p \n",x,&x);
callbyreferance(&x);
printf("after call function \n");
printf("x number after value %d x number after adress %p \n",x,&x);
	
}
void callbyreferance(int *aptr)
{
printf("*aptr value  %d  *aptr adress %p \n",*aptr,aptr);	
 *aptr=pow(*aptr,3);
printf("after executive function \n");
printf("*aptr  number after value %d *aptr  number after adress %p \n",*aptr ,aptr);
	
	
}
