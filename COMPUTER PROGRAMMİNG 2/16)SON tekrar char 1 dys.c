#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>
#define SIZE 62 // SIZE OLARAK D�Z�YE YAZDIRIRKEN 1 EKS���N� YAZIYORUZ D�Z�N�N BOYUTUNUN NORMALDE 63 ELEMALI D�Z�
 main()
 {
  char a[SIZE+1]={}; // D�Z�Y� TANIMLADIM ���NDE KARAKTER DEPOLUYCAK 63 ELEMANLI 
  int i;
  for(i=0;i<SIZE;i++)
  {
  	a[i]=rand()%60+30;// rand()%(upper - lower+1)+(lower limit)
  // burada diziye char format�nda yazd�rd�k dizinin i�ine 40 karakter depoland� diziyi bitirip string format�na getirmek i�in
  // '\0' koymam�z laz�m en sona 
  }	
 // bunun i�in 
 a[SIZE]='\0';
 // YAPIP D�Z�Y� EN SON B�T�RD�K VE STR�NG OLARAK BASTIRAB�L�R�Z ARTIK	
 	printf("string is %s",a);
 	
 	
 	
 	
 	
 	
 	
 }
