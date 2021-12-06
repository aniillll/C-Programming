#include<stdio.h>
#include<string.h>
 void reverse(char *arr,int size);
 main()
 {
 char a[]="ahmet";
 int SIZE;
 SIZE=strlen(a);
 printf("before \n");
 printf("%s \n",a);
 
 reverse(a,SIZE);
 
 printf("\n after reverse function \n");
 printf("%s",a);	
 }
 void reverse(char *arr,int size)
 {
 int i=0,temp;	
 for(i=0;i<size/2;i++)
 {
  temp=*(arr+i);
  *(arr+i)=*(arr+size-1-i);
 *(arr+size-1-i)=temp;	
  
  }	

	
 }
