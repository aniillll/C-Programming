#include  <stdio.h>

main()
{
  int a=3,b=7,c;
  c=a+b;
  double *aptr=&a,*bptr=&b,*cptr=&c;
    
    printf("the value of c = %d \n",c);
    printf("the value of &a = %p \n\n",&a);
    
    printf("the value of bptr = %p \n",bptr);
    printf("the value of *bptr = %d \n\n",*bptr);
    
    printf("the value of cptr  is %p \n",cptr);
    printf("the value of *aptr = %d \n\n",*aptr);
    
    printf("the value of *&a= %d \n",*&a);
    printf("the value of *&c = %d \n\n",*&c);
    
    printf("the value of *&aptr is %p \n",*&aptr);
    printf("the value of &*bptr is %p \n",&*bptr);
    printf("the value of &*cptr  is %p \n",&*cptr);
}
