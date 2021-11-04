#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>
#define SIZE 62 // SIZE OLARAK DÝZÝYE YAZDIRIRKEN 1 EKSÝÐÝNÝ YAZIYORUZ DÝZÝNÝN BOYUTUNUN NORMALDE 63 ELEMALI DÝZÝ
 main()
 {
  char a[SIZE+1]={}; // DÝZÝYÝ TANIMLADIM ÝÇÝNDE KARAKTER DEPOLUYCAK 63 ELEMANLI 
  int i;
  for(i=0;i<SIZE;i++)
  {
  	a[i]=rand()%60+30;// rand()%(upper - lower+1)+(lower limit)
  // burada diziye char formatýnda yazdýrdýk dizinin içine 40 karakter depolandý diziyi bitirip string formatýna getirmek için
  // '\0' koymamýz lazým en sona 
  }	
 // bunun için 
 a[SIZE]='\0';
 // YAPIP DÝZÝYÝ EN SON BÝTÝRDÝK VE STRÝNG OLARAK BASTIRABÝLÝRÝZ ARTIK	
 	printf("string is %s",a);
 	
 	
 	
 	
 	
 	
 	
 }
