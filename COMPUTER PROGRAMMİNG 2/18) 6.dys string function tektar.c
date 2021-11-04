#include<stdio.h>
#include<string.h>
 main()
 {
 char *a="ali ";	
 char *b="ata bak";
 char c[25]={};
 char *d="ali ";
 char *e="ata bak";
 char character1='b';
 char character2='l';
  strncpy(c,b,5);
 c[5]='\0';
 printf("\n strncpy(c,b,4); after\n");
 printf("c:%s \n",c);
 printf("a:%s \n",a);
 printf("b:%s \n",b);
    strcpy(c,a);
    printf("\nafter strcpy(c,a) function \n ");
    printf("a:%s \n",a);
    printf("c:%s \n",c);
    strcat(c,b);
  printf("\nafter strcpy(c,b) function \n ");
  printf("a:%s \n",a);
  printf("b:%s \n",b);		
  printf("c:%s \n",c);
     strcmp(d,e);
     printf("\ncompare d>e or not \n");
     printf("%d",strcmp(d,e)); 
     strcmp(d,e);
     printf("\ncompare d>e or not \n");
     printf("%d",strcmp(d,e)); 
 
 
 if(strchr(e,character1)!=NULL)
 {
 printf("\n\n%c is found in %s\n",character1,e);
 printf("%s\n",strchr(e,character1));
 }
 else
 {
 	
 printf("%c isn't' found in %s\n",character1,e);	
 }
  // strchar fonksiyonuu strchr(e,character2) character 2 e stringinin içinde var mý ona bakýyor eðer varsa
 // strchr(e,character2) ifadesini bastýrdýðýmzda character 2 kelimesinin ilk nerede bulunuyorsa oraya pointer koyar ve oradan itibaren
 // bastýrýr.
 // eðer strchr(e,character2) fonksiyonunda e stringinde character 2 yoksa NULL DÖNER.	
     if(strchr(e,character2)!=NULL)
     {
     printf("\n\n%c is found in %s\n",character2,e);
     printf("%s\n",strchr(e,character2));
     }
     else
     {
       printf("%c isn't' found in %s\n",character2,e);	
       printf("%s\n",strchr(e,character2));
     }	

 // strr	
 	
 	
 	
 	
 }
