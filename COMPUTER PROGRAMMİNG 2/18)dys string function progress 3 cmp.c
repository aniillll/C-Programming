#include<stdio.h>
#include<string.h>
#include<ctype.h>
 // this program implement which one greater than other string.
 main()
 {
  char *a="HAPPY NEW YEAR ";
  char *b="HAPPY NEW YEAR ";
  char *c="HALLOWEN DAY ";
 printf("strcmp(a,b) =%d \n",strcmp(a,b)); // burada a>b den b�y�k m� ona bak�yor harf harf kar��la�t�r�yor iki stringi
  // e�er a>b ise 1 d�n�yor e�er ikisi denkse 0 ,e�er k���kse -1 d�n�yor.
  /*ilk �nce H ile H yi kar��la�r�yor ayn� 
  
  *ikinci harflere bak�yor A A AYNI MI AYNI �SE SONRAK�NE GE��YOR
  *���nc� harflere bak�yor p p AYNI MI AYNI �SE SONRAK�NE GE��YOR
  *4. harflere bak�yor p p AYNI MI AYNI �SE SONRAK�NE GE��YOR
  *n harflere bak�yor n n AYNI MI AYNI �SE SONRAK�NE GE��YOR
  *hespi ayn� ise 0 d�n�yor
  */
 printf("strcmp(b,a) =%d \n",strcmp(b,a));
   /*ilk �nce H ile H yi kar��la�r�yor ayn� 
  
  *ikinci harflere bak�yor A A AYNI MI AYNI �SE SONRAK�NE GE��YOR
  *���nc� harflere bak�yor p p AYNI MI AYNI �SE SONRAK�NE GE��YOR
  *4. harflere bak�yor p p AYNI MI AYNI �SE SONRAK�NE GE��YOR
  *n harflere bak�yor n n AYNI MI AYNI �SE SONRAK�NE GE��YOR
  *hespi ayn� ise 0 d�n�yor
  */
 printf("strcmp(c,b) =%d \n",strcmp(c,b));
   /*ilk �nce H ile H yi kar��la�r�yor ayn� 
  
  *ikinci harflere bak�yor A A AYNI MI AYNI �SE SONRAK�NE GE��YOR
  *���nc� harflere bak�yor p l AYNI MI AYNI �SE SONRAK�NE GE��YOR ayn� de�il 
   h>l h sonra geliyorr c>b de�il yani -1 d�n�yor
  */
 printf("strcmp(b,c) =%d \n",strcmp(b,c));
 // strncmp() iki dizi aras�ndaki karakteri n karaktere kadar kar��la�t�r�yor.
 printf("strncmp(a,b,6) =%d \n",strncmp(a,b,6));
    /*ilk �nce H ile H yi kar��la�r�yor ayn� 
  
  *ikinci harflere bak�yor A A AYNI MI AYNI �SE SONRAK�NE GE��YOR
  *���nc� harflere bak�yor p p AYNI MI AYNI �SE SONRAK�NE GE��YOR
  *4. harflere bak�yor p p AYNI MI AYNI �SE SONRAK�NE GE��YOR
  *5. harflere bak�yor y y AYNI MI AYNI �SE SONRAK�NE GE��YOR
  *6. harflere bak�yor bo�uk bo�luk AYNI MI AYNI �SE SONRAK�NE GE��YOR
  *hespi ayn� ise 0 d�n�yor
  */
 printf("strncmp(a,b,2)=%d \n",strncmp(a,c,2));
 printf("strncmp(a,b,5)=%d \n",strncmp(a,c,5));
 
 
 	
 	
 	
 	
 	
 	
 	
 	
 }
