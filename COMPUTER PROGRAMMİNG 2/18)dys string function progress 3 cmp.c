#include<stdio.h>
#include<string.h>
#include<ctype.h>
 // this program implement which one greater than other string.
 main()
 {
  char *a="HAPPY NEW YEAR ";
  char *b="HAPPY NEW YEAR ";
  char *c="HALLOWEN DAY ";
 printf("strcmp(a,b) =%d \n",strcmp(a,b)); // burada a>b den büyük mü ona bakýyor harf harf karþýlaþtýrýyor iki stringi
  // eðer a>b ise 1 dönüyor eðer ikisi denkse 0 ,eðer küçükse -1 dönüyor.
  /*ilk önce H ile H yi karþýlaþrýyor ayný 
  
  *ikinci harflere bakýyor A A AYNI MI AYNI ÝSE SONRAKÝNE GEÇÝYOR
  *üçüncü harflere bakýyor p p AYNI MI AYNI ÝSE SONRAKÝNE GEÇÝYOR
  *4. harflere bakýyor p p AYNI MI AYNI ÝSE SONRAKÝNE GEÇÝYOR
  *n harflere bakýyor n n AYNI MI AYNI ÝSE SONRAKÝNE GEÇÝYOR
  *hespi ayný ise 0 dönüyor
  */
 printf("strcmp(b,a) =%d \n",strcmp(b,a));
   /*ilk önce H ile H yi karþýlaþrýyor ayný 
  
  *ikinci harflere bakýyor A A AYNI MI AYNI ÝSE SONRAKÝNE GEÇÝYOR
  *üçüncü harflere bakýyor p p AYNI MI AYNI ÝSE SONRAKÝNE GEÇÝYOR
  *4. harflere bakýyor p p AYNI MI AYNI ÝSE SONRAKÝNE GEÇÝYOR
  *n harflere bakýyor n n AYNI MI AYNI ÝSE SONRAKÝNE GEÇÝYOR
  *hespi ayný ise 0 dönüyor
  */
 printf("strcmp(c,b) =%d \n",strcmp(c,b));
   /*ilk önce H ile H yi karþýlaþrýyor ayný 
  
  *ikinci harflere bakýyor A A AYNI MI AYNI ÝSE SONRAKÝNE GEÇÝYOR
  *üçüncü harflere bakýyor p l AYNI MI AYNI ÝSE SONRAKÝNE GEÇÝYOR ayný deðil 
   h>l h sonra geliyorr c>b deðil yani -1 dönüyor
  */
 printf("strcmp(b,c) =%d \n",strcmp(b,c));
 // strncmp() iki dizi arasýndaki karakteri n karaktere kadar karþýlaþtýrýyor.
 printf("strncmp(a,b,6) =%d \n",strncmp(a,b,6));
    /*ilk önce H ile H yi karþýlaþrýyor ayný 
  
  *ikinci harflere bakýyor A A AYNI MI AYNI ÝSE SONRAKÝNE GEÇÝYOR
  *üçüncü harflere bakýyor p p AYNI MI AYNI ÝSE SONRAKÝNE GEÇÝYOR
  *4. harflere bakýyor p p AYNI MI AYNI ÝSE SONRAKÝNE GEÇÝYOR
  *5. harflere bakýyor y y AYNI MI AYNI ÝSE SONRAKÝNE GEÇÝYOR
  *6. harflere bakýyor boþuk boþluk AYNI MI AYNI ÝSE SONRAKÝNE GEÇÝYOR
  *hespi ayný ise 0 dönüyor
  */
 printf("strncmp(a,b,2)=%d \n",strncmp(a,c,2));
 printf("strncmp(a,b,5)=%d \n",strncmp(a,c,5));
 
 
 	
 	
 	
 	
 	
 	
 	
 	
 }
