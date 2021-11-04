#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 struct student
 {
 int idnumber;
 char firstname[100];
 char lastname[100];
 char gender;
 int age;
 double gpa;	
 };
 void printStudentarray(struct student *p);
  main()
  {
 
     struct student astudent={1549,"Anıl","özen",'M',22,3.11};	
     struct student astudent2={};
     astudent2.idnumber=1345;
     strcpy(astudent2.firstname,"ayşe");
     strcpy(astudent2.lastname,"yılmaz");
     astudent2.gender='F';
     astudent2.age=23;
     astudent2.gpa=2.11;


 struct student Astudentarray[5];
  int i;

  Astudentarray[0]=astudent;
  Astudentarray[1]=astudent2;
  for(i=2;i<5;i++)
  {
  	Astudentarray[i].idnumber=5003+i;
  	printf("enter name and surname ,gpa,gender\n");
  	scanf("%s%s%d%c",&Astudentarray[i].firstname,&Astudentarray[i].lastname,&Astudentarray[i].gpa,&Astudentarray[i].gender);
   Astudentarray[i].age=rand()%18+18;

  }
 printStudentarray(Astudentarray);

  }
  void printStudentarray(struct student *p)
  {
  	int i;
  	  for(i=0;i<5;i++)
  {
  printf("%s\t",p[i].firstname);	
  	printf("%s\t",p[i].lastname);
  	printf("%d\t",p[i].idnumber);
  	printf("%d\t",p[i].age);
  	printf("%c\t",p[i].gender);
  	printf("%lf\n\n",p[i].gpa);
  	
  	
  }  
  }
