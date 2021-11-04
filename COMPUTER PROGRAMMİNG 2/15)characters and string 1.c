#include<stdio.h>

 main()
 {
 char a[]={'A','N','I','L','\0'}; // sonuna koyduðumuz \0 karakteri diziye çevirmek için kullanýlýr 
                   // %c karakter için kullanýlur %s string için kullanýlýr
                   
 
 printf("%s \n",a); // karakter olarak dizinin içine attýðýmýz harfleri string olarak
                     // %s ile bastýrdýk a dizisi içinde '\0' sayesinde string olarak depoladý diziyi bastýrýnca kelime olarak
                     // bastýrdý.
 printf("*(a+0) = %c \n",*(a)); // karakterleri pointer offset ile sýrayla bastýrdýk %c ile 
 printf("*(a+1) = %c \n",*(a+1)); // karakter oralak bastýrdýðýmýzda * gerekli ama stringde * gereksizdir
 printf("*(a+2) = %c \n",*(a+2));
 printf("*(a+3) = %c \n",*(a+3));
  printf("*(a+4) = %c \n",*(a+4));
  printf("\n\n dizinin içine karakter olarak yazmakla string olarak yazmak arasýnda fark yoktur\n\n");	
 char b[]="ANIL";
 printf("%c \n",*(b+0));//pointer offset notasyonunda karakter bastýrýrken printf("%c",*(b+i)); kullan
 printf("%c \n",*(b+1));
 printf("%c \n",*(b+2));
 printf("%c \n",*(b+3));
 printf("%c \n",*(b+4));
 printf("%s \n",b); // string bastýrýrken sadece dizinin adýný bastýr stringi bastýrýr printf("%s",b); yeterli 
 	
 char c[20];
 printf("write name \n");
 scanf("%s",c);
 printf("%s",c);
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 }
