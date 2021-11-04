#include<stdio.h>
#include<string.h>
 main()
 {
 	/*
 	strchr(a,character1); fonksiyonunda stringin içinde o karakter var mý yok mu ona bakýyoruz
 	karakter aramasý yapýyoruz yani 
 	*eðer o karakter varsa karakterin olduðu yere bir pointer koyuyor
 	eðer biz printf("%s",strchr(a,character1)); yapmak istersek stringde(a) o karaktar dahil geriye kalanýný bastýrýyoruz.
 	*eðer karakter string de(a) yoksa NULL BASTIRIYOR.
 
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
