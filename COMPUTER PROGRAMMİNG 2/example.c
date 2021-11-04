#include <stdio.h>
void callByReference(int *nPtr);
main()
{
int number=5;
printf("number is %d address is %p\n",number,&number);
callByReference(&number);
printf("After function call\n");
printf("number is %d address is %p\n",number,&number);
}
void callByReference(int *nPtr)
{
printf("*nPtr is %d nPtr is %p\n",*nPtr,nPtr);
*nPtr=(*nPtr)*(*nPtr)*(*nPtr);
printf("After execution\n");
printf("*nPtr is %d nPtr is %p\n",*nPtr,nPtr);
}
