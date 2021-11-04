#include<stdio.h>
#include<string.h>

 struct building
 {
   char name[20];
   char surname[20];
   char job[20];
   int age;
   int numberofoutsidedoor;
	
 };
 
 main()
 {
 struct building neighboors[10];
 int i;
  for(i=0;i<10;i++)
  {
   printf("enter your name and surname\n");
   scanf("%s %s",neighboors[i].name,neighboors[i].surname);
   printf("enter your job,age and your outside door number\n");
   scanf("%s %d %d",neighboors[i].job,&neighboors[i].age,&neighboors[i].numberofoutsidedoor);	
  }	
 	
  for(i=0;i<10;i++)
  {
   printf("%s    %s      %s     %d      %d \n",neighboors[i].name,neighboors[i].surname,neighboors[i].job,neighboors[i].age,neighboors[i].numberofoutsidedoor);
  }	
 	
 	
 	
 	
 }
