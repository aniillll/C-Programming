#include<stdio.h>
#define SIZE 4
main()
{

int b[4] = {10,20,30,40};
int *bptr=b;
int i,ofset;
 for(i=0;i<SIZE;i++)
 {
    printf("arrey subscript notation \n");
	printf("b[i]=%d \n",i,b[i]);	
 	
 }
 for(ofset=0;ofset<SIZE;ofset++)
 {
    printf("arrey name and pointer ofset notation notation \n");
	printf("*(b+ofset)=%d \n",ofset,*(bptr+ofset));	
 	
 } 

 for(i=0;i<SIZE;i++)
 {
    printf("pointer subscriptnotation \n");
	printf("bptr[i]=%d \n",i,bptr[i]);
	//bptr[1] ile b[i] ayný þey	
 	
 } 
 for(ofset=0;ofset<SIZE;ofset++)
 {
    printf("pointer ofset notation \n");
	printf("*(b+ofset)=%d \n",ofset,*(bptr+ofset));
	//bptr[1] ile b[i] ayný þey	
 	
 } 
 
 

	
	
	
	
	
	
	
	
	
}
