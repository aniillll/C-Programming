#include<stdio.h>
#include<string.h>
 struct student
 {
 	char name[20];
 	int age;
 	double gap;
 	
 	
 }
 
 main()
 {
  struct student member[6];	
 int i,j;
 int temp;	
 for(i=0;i<5;i++)
 {
printf("enter name ,age and gpa\n");
scanf("%s %d %lf",member[i].name,&member[i].age,&member[i].gap)  ;
 }
 
 	
 for(i=0;i<5;i++);
 {
 printf("%s%d%lf\n",member[i].name,&member[i].age,&member[i].gap);	
  }

 }
