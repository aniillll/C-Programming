#include<stdio.h>

 main()
 {
 char a[]={'A','N','I','L','\0'}; // sonuna koydu�umuz \0 karakteri diziye �evirmek i�in kullan�l�r 
                   // %c karakter i�in kullan�lur %s string i�in kullan�l�r
                   
 
 printf("%s \n",a); // karakter olarak dizinin i�ine att���m�z harfleri string olarak
                     // %s ile bast�rd�k a dizisi i�inde '\0' sayesinde string olarak depolad� diziyi bast�r�nca kelime olarak
                     // bast�rd�.
 printf("*(a+0) = %c \n",*(a)); // karakterleri pointer offset ile s�rayla bast�rd�k %c ile 
 printf("*(a+1) = %c \n",*(a+1)); // karakter oralak bast�rd���m�zda * gerekli ama stringde * gereksizdir
 printf("*(a+2) = %c \n",*(a+2));
 printf("*(a+3) = %c \n",*(a+3));
  printf("*(a+4) = %c \n",*(a+4));
  printf("\n\n dizinin i�ine karakter olarak yazmakla string olarak yazmak aras�nda fark yoktur\n\n");	
 char b[]="ANIL";
 printf("%c \n",*(b+0));//pointer offset notasyonunda karakter bast�r�rken printf("%c",*(b+i)); kullan
 printf("%c \n",*(b+1));
 printf("%c \n",*(b+2));
 printf("%c \n",*(b+3));
 printf("%c \n",*(b+4));
 printf("%s \n",b); // string bast�r�rken sadece dizinin ad�n� bast�r stringi bast�r�r printf("%s",b); yeterli 
 	
 char c[20];
 printf("write name \n");
 scanf("%s",c);
 printf("%s",c);
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 }
