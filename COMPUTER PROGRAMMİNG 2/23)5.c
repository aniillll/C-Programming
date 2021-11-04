#include<stdio.h>
#include<string.h>
 struct member
 {
 char name[20];
 char surname[20];
 double ort;
 }
 main()
  {
  	int i,j,temp;;
 
  struct member student[5];
  
  for(i=0;i<5;i++)
  {
  printf("enter name and surname yaz\n");	
  scanf("%s %s",&student[i].name,&student[i].surname);
  printf("enter general avrege\n");	
  scanf("%lf",&student[i].ort);  	
  	
  }
  for(i=0;i<5;i++)
  {
  	printf("%s\t%s\t%lf\n\n",student[i].name,student[i].surname,student[i].ort);
  	
  	
  }
 for(i=0;i<5;i++)
 {
  for(j=1;j<5-i;j++)
  {
  	if(student[j-1].ort>student[j].ort)
  	{
  	temp=student[j].ort;
	student[j].ort=student[j-1].ort;
	student[j-1].ort=temp;	
  		
	  }
  	
	  }	
	
 	
 	
 }

  
	  for(i=0;i<5;i++)
  {
  	printf("%s\t%s\t%lf\n\n",student[i].name,student[i].surname,student[i].ort);
  	
  	
  }



   }
  
