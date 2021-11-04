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
 void printStudent(struct student p);
 double calculateGenalAvg(double s1,double s2);
 void determineGender(char a2,char* a3);
 void printstudentarray(const struct student *parray );
 int countMaleStudent(struct student *parray);
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
 
 printStudent(astudent);
 printStudent(astudent2);
 
calculateGenalAvg(astudent.gpa,astudent2.gpa);
 printf("genral avg is %lf \n\nsss",calculateGenalAvg(astudent.gpa,astudent2.gpa));
 
  determineGender(astudent.gender,astudent.firstname);
  determineGender(astudent2.gender,astudent2.firstname);
  
 
 
 }
   void printStudent(struct student p)
   {
     printf("%s \t %s \t %d \t%c\t%d\t%lf\n\n",p.firstname,p.lastname,p.idnumber,p.gender,p.age,p.gpa);
 	
   }
   double calculateGenalAvg(double s1,double s2)
   {
  
   	return (s1+s2)/2.00; 
   	
   }
   void determineGender(char a2,char* a3)
   {
   	if(a2=='M')
   	{
   	printf("%s is male\n",a3);
    }
   	else
   	{
   	printf("%s is female\n",a3);	
	   }
   	
   }
   
