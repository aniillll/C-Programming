#include<stdio.h>
#include<string.h>
  
  struct member{
  	char name[20];
  	char surname[20];
  	int idnumber;
  	float ave;
	
  }
 main()
 {
  struct member student[4];
  struct member *studentptr;
   studentptr=&student;	
  int i;
  for(i=0;i<4;i++)
  {
  	printf("enter name and surname\n");
  	scanf("%s %s",(studentptr+i)->name,(studentptr+i)->surname);
  	printf("enter idnumber and ave\n");
  	scanf("%d %f",(studentptr+i)->idnumber,(studentptr+i)->ave);
  	
 }
  for(i=0;i<4;i++)
  {
  	printf("%s\t",(studentptr+i)->name);
  	printf("%s\t",(studentptr+i)->surname);
  	printf("%d\t",(studentptr+i)->idnumber);
  	printf("%f\n\n",(studentptr+i)->ave);
   }	
 	
 	
 	
 }
