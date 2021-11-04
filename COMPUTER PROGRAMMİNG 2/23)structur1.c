#include<stdio.h>
#include<string.h>
  struct information
  {
  int idnumber;
  char name[100];
  char surname[100];
  int age;	
  double gpa;	
  char gender;	
  	
  	
  };
 main()
 {
 	int i;
 struct information firstinf={1549,"anýl","özen",22,3.11,'M'};
 double gaps=0;
 printf("first person information\n");
 printf("first id number is %d\n",firstinf.idnumber);
 printf("first name is %s \n",firstinf.name);	
 printf("fisrt surname is %s\n",firstinf.surname);
 printf("first age is %d\n",firstinf.age);
 printf("first gpa is %lf\n",firstinf.gpa);
   struct information secondinf;
   secondinf.idnumber=1249;
   strcpy(secondinf.name,"selin");
   strcpy(secondinf.surname,"asya");
   secondinf.age=21;
   secondinf.gpa=2.79;
   secondinf.gender='F';
   printf("\nsecond person information\n");
   printf("second id number is %d\n",secondinf.idnumber);
   printf("second name is %s \n",secondinf.name);	
   printf("second surname is %s\n",secondinf.surname);
   printf("second age is %d\n",secondinf.age);
   printf("second gpa is %lf\n",secondinf.gpa);
   printf("second gender is %c\n",secondinf.gender);
   gaps=gaps+(secondinf.gpa+firstinf.gpa)/2;
   printf("\ngenal average gpa %lf\n",gaps);
 
 if(firstinf.gender=='M')
 {
 	printf("%s  is male \n",firstinf.name);
 	
  }	
 else
 {
 printf("%s  is female \n",firstinf.name);	
	 }	
 if(secondinf.gender=='F')
 {
 	printf("%s is female\n",secondinf.name);
 	
  }	
 else
 {
 printf("%s is male\n",secondinf.name);	
	 } 	
 strcmp(firstinf.name,secondinf.name);
 printf("\n%s compared to %s",firstinf.name,secondinf.name,strcmp(firstinf.name,secondinf.name));
 struct information astudentarray[5];
 
 astudentarray[0]=firstinf;
 astudentarray[1]=secondinf;
 
 for(i=2;i<5;i++)
 {
 astudentarray[i].idnumber=123+i;
 printf("enter name\n");
 scanf("%s",&astudentarray[i].name);
 printf("enter surname \n");
 scanf("%s",&astudentarray[i].surname);
 printf("enter age \n");
 scanf("%d",&astudentarray[i].age);
 printf("enter gpa \n");
 scanf("%lf",&astudentarray[i].gpa);	
 printf("enter gender\n");
 scanf("%c\n",&astudentarray[i].gender); 	
 
 }
 
 
 
 
 
 
 }
