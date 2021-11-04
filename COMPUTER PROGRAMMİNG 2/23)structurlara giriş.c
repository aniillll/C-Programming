#include<stdio.h>
#include<string.h>

  struct student
  {
  	char name[100];
  	char surname[100];
  	int age;
  	char gender;
 
  }
  main()
  {
  	
  struct student astudent={"anýl","özen",22,'M'};
  struct student *aptr=&astudent;
  printf("\dot operation \n");	
  	printf("name is %s \n",astudent.name);
  	printf("surname is %s \n",astudent.surname);
  	printf("age is %d\n",astudent.age);
  	printf("gender is %c\n",astudent.gender);
  printf("\narrow operation \n");	
  	
  printf("name is %s \n",aptr->name);
  printf("surname is %s \n",aptr->surname);
  printf("age is %d \n",aptr->age);
  printf("gender is %c \n",aptr->gender);
  	
  	
  	
  	
  	
  	
  }
