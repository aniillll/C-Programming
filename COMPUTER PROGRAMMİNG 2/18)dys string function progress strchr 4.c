#include<stdio.h>
#include<string.h>
 main()
 {
 	/*
 	strchr(a,character1); fonksiyonunda stringin i�inde o karakter var m� yok mu ona bak�yoruz
 	karakter aramas� yap�yoruz yani 
 	*e�er o karakter varsa karakterin oldu�u yere bir pointer koyuyor
 	e�er biz printf("%s",strchr(a,character1)); yapmak istersek stringde(a) o karaktar dahil geriye kalan�n� bast�r�yoruz.
 	*e�er karakter string de(a) yoksa NULL BASTIRIYOR.
 
 	*/
 char *a="This is a test ";
 char character1='a';
 char character2='z';
 
 if(!strchr(a,character1))
 {
 printf("%c is found in %s",character1,a);
  	
 printf("\n %s",strchr(a,character1));	
 
 }
 else
 {
 printf("%c isn't found in %s",character1,a);	
 	
 	
 }
 
 if(strchr(a,character2)!=NULL)
 {
 printf("%c is found in %s",character2,a);	
 printf("\n %s",strchr(a,character2));	
 	
	
 }
 else
 {
 printf("\n %c isn't found in %s",character2,a);	
 	
 	
 } 
 	
 	
 	
 	
 	
 	
 	
 	
 }
