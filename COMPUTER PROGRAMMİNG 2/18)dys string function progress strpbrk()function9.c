#include<stdio.h>
#include<string.h>
 main()
 {
 	char *a="This is a test";
 	char *b="beaware";
 	char *c="rats";
 	// strpbrk(s2,s1) fonksiyonu s1 stringinin içindeki harflerden birinin ilk kez s2 stringinde nerede bulunuyorsa oraya
 	// pointer koyar ve o ve devamýný bastýrýr.
  if(strpbrk(a,b)!=NULL)
  {
    printf("\n%s string  found in %s string \n",b,a);
    printf("\n %s",strpbrk(a,b));
  	
  	
  }
    if(strpbrk(a,c))
  {
    printf("\n%s string  found in %s string \n",c,a);
    printf("\n %s",strpbrk(a,c));
  	
  	
  }
 
  
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 }
