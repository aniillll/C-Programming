#include<stdio.h>
#include<string.h>
 main()
 {
 // strcpy fonksiyonunun iþlevi ikincisini ilkine kopyalamak strcpy(a,b); b yi a ya kopyaladýk.
 char *a="happy birdthday to you";
 char b[25];
 char c[15];
  printf("before called strcpy function \n");
  printf("a is %s \n",a);
 strcpy(b,a);
 printf("\nafter strcpy function called \n");
 printf("b is %s \n",b);
 printf("a is %s \n",a);
 // þimdi strncpy fonk siyonunun iþlevini göreceðiz strncpy(b,c,5); yaptýðýmýzda c nin en fazla 5 karakterini
 // b nin içine kopyaladýk.
 strncpy(c,b,5);// burada b nin 5 karakterini c nin içine kopyaladýk.
 c[14]='\0'; //strnler de sonuna '\0' koymuyor onu bizim koymamýz gerekiyor.
  printf("\nafter strncpy function called \n");
 printf("b is %s \n",b);
 printf("c is %s \n",c);
 	
 	
 	
 	
 	
 	
 	
 	
 	
 }
