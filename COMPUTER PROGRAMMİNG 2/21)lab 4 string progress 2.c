#include<stdio.h>
#include<string.h>
 main()
 {
 char y[200];
 char s0[35]=" the string ends .";
 char s1[35]=" indicate where the string ";
 char s2[35]=" sauce to indicate where ";
 char s3[35]=" bit of special sauce";
 char s4[35]=" a little bit of special";
 char s5[35]=" bit";
 char s6[35]=" chars with a little";
 char s7[35]=" of chars bit";
 char s8[35]=" really arrays of"; 
 char s9[35]=" C strings are really arrays ";
  strcat(y,s9);	
  printf("the fist step-------> %s\n",y);	
 strcat(y,s8+14);		
 printf("the second step-------> %s\n",y);
 strncat(y,s7+4,6);
  printf("the third step-------> %s\n",y);
 strncat(y,s6+6,13);	
 printf("the fourth step-------> %s \n",y);	
 strcat(y,s5);
 printf("the fifth step-------> %s \n",y);
 strncat(y,s4+12,3);	
 printf("the sixth step-------> %s \n",y);
 strncat(y,s3+7,8);
 printf("the seventh step-------> %s \n",y);
 strncat(y,s2,9);
 printf("the eighth step-------> %s \n",y);
  strncat(y,s1,19);
 printf("the eighth step-------> %s \n",y);	
  strcat(y,s0+3);
 printf("the nineth step-------> %s \n",y);
 	
 	
 	
 	
 	
 }
