#include<stdio.h>
#include<string.h>
 main()
 {
 char x[]="C strings are really arrays of chars with a little bit of special sauce to indicate whre string end.";	
 char s1[100];
 char s2[35];
 char s3[25];
 char s4[15];
 char s5[5];
 char s6[30];
 strcpy(s1,x);
 strncpy(s2,s1,30);
 strncpy(s3,x+31,20);
 strncpy(s4,x+51,15);
 strncpy(s5,x+66,5);
 strncpy(s6,x+71,30);
 printf("x: %s \n",x);
 printf("s1: %s \n",s1);
 printf("s2: %s \n",s2);
 printf("s3: %s\n",s3);
 printf("s4: %s\n",s4);
 printf("s5: %s\n",s5);
 printf("s6: %s\n",s6);
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 }
