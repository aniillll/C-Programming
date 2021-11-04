#include<stdio.h>
#include<string.h>
int longer (char *arr);
 main()
 {
 char a[]="ANIL";
 longer(a);
 printf("this is our wote size, which is %d \n",longer(a));

	// bu yazdýðýmýz fonksiyonu string.h kütüphenesinin içinde strlen(); fonksiyonu yapýyor
printf("\n this is size but including stdio.h library strlen(a) = %d\n",strlen(a));	
	
 }
 int longer (char *arr)
 {
 int i,length=0;
 for(i=0;*(arr+i) != '\0';i++)	
 {
 length++;	
 	
 	
 	
 }
 return length;	
 	
 	
 	
 }
