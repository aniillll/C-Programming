#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 struct train
 {
  int TripID;  
  int normal;	
  int elderly;
  int student;
  int employees;
  double income;
 	
 };
  void ýncome (const struct train *p);
 main()
 {
 struct train t[10];
 int i;
 for(i=0;i<10;i++)
 {
  t[i].TripID=i+1;	
  t[i].normal=rand()%71+5;	
  t[i].elderly=rand()%71+5;
  t[i].student=rand()%71+5;
  t[i].employees=rand()%71+5;	
  t[i].income=0;
	 }	
 	
  ýncome (t);
 	
 }
 void ýncome (const struct train *pArray)
 {
  int i;
  for(i=0;i<10;i++)
  {
  	if((pArray+i)->normal)
  	{
  		
  		
	  }
  	
  	
  	
  	
	  }	
 	
 	
 	
 	
 	
 	
 }
