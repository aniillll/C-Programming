#include<stdio.h>
#include<ctype.h>
 main()
 {
 int c1,c2,c3,c4,c5;
 char a[5]={'a','n','i','l','\0'};// dizinin sonuna koydu�umuz '\0' i�areti ile i�inde karakter olan diziyi stringe �evirebildik. 
 printf("karakter olan diziyi string olarak bastirma a =%s \n",a);
 char b[20]="anil ozen";
 printf("string olan diziyi bastirma b= %s \n",b);
 // yukar�daki iki ifadede ayn� �eyi ifade ediyor.
 c1='A';
 c2='N';
 c3='I';
 c4='L';
 c5='L';
 printf("c1=%d,c2=%d,c3=%d,c4=%d,c5=%d \n",c1,c2,c3,c4,c5);
 printf("\nc1=%c,c2=%c,c3=%c,c4=%c,c5=%c \n",c1,c2,c3,c4,c5);
 char world[20];
 scanf("%19s ",world);
 // scanf de al�rken string bo�uk b�rak�rsak bo�luktan sonras�n� almaz.
 printf(" \n %s",world);	
 	
 	
 	
 	
 	
 	
 }
