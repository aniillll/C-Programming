#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define size 20
 main()
 {
 	/*
 	char a[size];
 	int i=0;
 	int c;
 while(i<size-1 && ((c=getchar())!='\0'))
 {
 	a[i]=c;
 	 printf("%c\n",a[i]);
	i++;
 }	
 a[i]='\0';	
 printf("\n %s",a);	
 	*/
 	//sprintf****
 	/*
 char a[20];
 int x,y;
 printf("enter clock a and b\n");
 scanf("%d %d",&x,&y);
 
 sprintf(a,"anýl okula saat %d ve %d arasý gitti.",x,y);
 printf("%s",a);
 	*/
 	//scanf()******
 char a[100]="3 456 15";
 int x,y,z;
 sscanf(a,"%d %d %d",&x,&y,&z);
 printf("the value of %d ,%d and %d found in a",x,y,z);
 	
 	
 }
