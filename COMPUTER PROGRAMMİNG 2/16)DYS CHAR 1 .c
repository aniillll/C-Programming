#include<stdio.h>
#include<ctype.h>
 main()
 {
 int c1,c2,c3,c4,c5;
 char a[5]={'a','n','i','l','\0'};// dizinin sonuna koyduðumuz '\0' iþareti ile içinde karakter olan diziyi stringe çevirebildik. 
 printf("karakter olan diziyi string olarak bastirma a =%s \n",a);
 char b[20]="anil ozen";
 printf("string olan diziyi bastirma b= %s \n",b);
 // yukarýdaki iki ifadede ayný þeyi ifade ediyor.
 c1='A';
 c2='N';
 c3='I';
 c4='L';
 c5='L';
 printf("c1=%d,c2=%d,c3=%d,c4=%d,c5=%d \n",c1,c2,c3,c4,c5);
 printf("\nc1=%c,c2=%c,c3=%c,c4=%c,c5=%c \n",c1,c2,c3,c4,c5);
 char world[20];
 scanf("%19s ",world);
 // scanf de alýrken string boþuk býrakýrsak boþluktan sonrasýný almaz.
 printf(" \n %s",world);	
 	
 	
 	
 	
 	
 	
 }
