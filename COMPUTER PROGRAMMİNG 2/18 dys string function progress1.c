#include<stdio.h>
#include<string.h>
 main()
 {
 // strcpy fonksiyonunun i�levi ikincisini ilkine kopyalamak strcpy(a,b); b yi a ya kopyalad�k.
 char *a="happy birdthday to you";
 char b[25];
 char c[15];
  printf("before called strcpy function \n");
  printf("a is %s \n",a);
 strcpy(b,a);
 printf("\nafter strcpy function called \n");
 printf("b is %s \n",b);
 printf("a is %s \n",a);
 // �imdi strncpy fonk siyonunun i�levini g�rece�iz strncpy(b,c,5); yapt���m�zda c nin en fazla 5 karakterini
 // b nin i�ine kopyalad�k.
 strncpy(c,b,5);// burada b nin 5 karakterini c nin i�ine kopyalad�k.
 c[14]='\0'; //strnler de sonuna '\0' koymuyor onu bizim koymam�z gerekiyor.
  printf("\nafter strncpy function called \n");
 printf("b is %s \n",b);
 printf("c is %s \n",c);
 	
 	
 	
 	
 	
 	
 	
 	
 	
 }
