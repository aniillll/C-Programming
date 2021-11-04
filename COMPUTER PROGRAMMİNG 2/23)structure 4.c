#include<stdio.h>
#include<string.h>
  
  struct student
  {
  char name[20];
  char surname[20];
  double gap;
	
  }

  

 main()
 {
 struct student member[5];
 int i,j;
 for(i=0;i<5;i++)
 {
 	printf("enter name ,surname and genreal point average\n");
	scanf("%s %s %lf",member[i].name,member[i].surname,&member[i].gap);
	 }	
 for(j=0;j<5;j++)
 {
 printf("%s\t%s\t%lf\n\n",member[i].name,member[i].surname,&member[i].gap);	
 	
	 }	
 	
 }
