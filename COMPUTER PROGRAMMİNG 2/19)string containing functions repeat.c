#include<stdio.h>
#include<string.h>
 main()
 {
 	 	/*strcpy()function b nin i�ine a y� kopyalad�k bu fonksiyonla.b art�k bo� de�il yeni kopyalanan oldu.
   char a[]="anil okula gitti";
   char b[20]=" ";
   strcpy(b,a);
   printf("b : %s \n ",b);
    */	
 strncpy() fonksiyonu ile a n�n 5 karakterini b nin i�ine kopyalad�k.b art�k bo� de�il yeni kopyalanan oldu.
 char a[]="an�l okula gitti";
 char b[20]="";
 strncpy(b,a,5);
 b[5]='\0'; // sadece strncpy de en sona null koymuyor onu eklemeyi unutma!!!
 printf("a :%s \n",a);
 printf("b :%s \n",b);
 */
     strcat() fonksiyonu ile ikinci ifadeyi ilkinin arkas�na ekledik ,arkaya ekleme i�lemlerinde kullan�l�r.
    char a[]=" an�l ";
    char b[]=" okula ";
    char c[]=" gitti.";
    char d[25]=" ";
    strcpy(d,a);
     printf("a :%s \n",a);
     printf("d :%s \n",d);
    strcat(d,b);
     printf("b :%s \n",b);
     printf("d :%s \n",d);    
    strcat(d,c);
     printf("b :%s \n",b);
     printf("c :%s \n",c);
     printf("d :%s \n",d);    
 	*/
 	   strncat() ikincinin n tane karakterini ilkine kopyal�yor.
 	   char a[]="ahmet okula ";
 	   char b[]="gitti.";
 	   strncat(a,b,6);
        printf("a :%s \n",a);
        printf("b :%s \n",b); 	
 	   */
 	strcmp() fonksiyonun da ilk stringin harfleri ile ikinci stringin harflerini kar��la�t�r�yor e�er a>b asc�� table da 1 d�n�yor 
	  a=b "an�l" ,"an�l" gibi iki string varsa 0 d�n�r a<b den -1 d�n�yor. 
 	char a[]="an�l";
 	char b[]="b�sra";
 	int c;
 	c=strcmp(a,b);
 	printf("%d",c);
 	*/
 	char a[]="an�l";
 	char b[]="anilo";
 	int c;
 	int d;
 	c=strncmp(a,b,2);// a ve b string(dizi)lerinin ilk 2 eleman�n�n�n s�ras�n� asc�� table k�yasl�yor.
 	printf(" strncmp(a,b,2)= %d \n",c);
 	d=strncmp(a,b,3);
 	printf("strncmp(a,b,3)= %d \n",d);
 	*/
 	 strchr() fonksiyonu ile bir karakterin ilk kez ba�tan sona nerede bulundu�unu ��reniyoruz.
 	*e�er karakter varsa karakterin oldu�u yere bir pointer koyup o ve oradan sonras�n� bast�r�r.
 	*e�er yoksa karakter null d�ner.
 	char *a="an�l okula gitti";
 	char character='o';
 	char character2='m';
 	if(strchr(a,character)!=NULL)
 	{
 		printf("%c found in  %s \n",character,a);
 		printf("%s \n",strchr(a,character));
 		
 		
 		
 		
	 }
	 else
	 {
	 printf("%c character is not found in  %s \n",character,a);	
	 	
	 }
 	
	 if(strchr(a,character2)!=NULL)
 	{
 		printf("%c found in  %s \n",character2,a);
 		printf("%s \n",strchr(a,character2));
 		
 		
 		
 		
	 }
	 else
	 {
	 printf("%c character is not found in  %s \n",character2,a);	
	 	
	 }	 
 	*/
 	/*
 	//strrchr()fonksiyonu arad���m�z bir harfin en son nerede oldu�unu s�yler.
 	char a[]="this is a test";
 	char character1='t';
 	char character2='s';
 	char character3='m';
 	
 	if(strrchr(a,character1)!=NULL)
 	{
 		printf("%c  character  found in %s  string\n ",character1,a);
 		printf("last found place is %s\n",strrchr(a,character1));
 	
	 }
 	else
 	{
 	printf("\n%c  character is not  found in %s  string\n ",character1,a);	
 
    }
 	
 	 	if(strrchr(a,character2)!=NULL)
 	{
 		printf("*\n%c  character  found in %s  string \n ",character2,a);
 		printf("last found place is %s\n",strrchr(a,character2));
 	
	 }
 	else
 	{
 	printf("\n%c  character is not  found in %s  string \n ",character2,a);	
 
    }
     	if(strrchr(a,character3)!=NULL)
 	{
 		printf("\n %c  character  found in %s  string \n",character3,a);
 		printf("last found place is %s \n",strrchr(a,character3));
 	
	 }
 	else
 	{
 	printf("%c  character is not  found in %s  string \n ",character3,a);	
 
    }
 	
 	// strstr() ikinci stringi ilk string i�inde ar�yoruz.
 	char *a="an�l okula gitti.";
 	char *b="gitti";
 	
 		if(strstr(a,b)!=NULL)
 	{
 		printf("\n %s  string  found in %s  string \n",b,a);
 		printf("founding place is %s \n",strstr(a,b));
 	
	 }
 	else
 	{
 	printf("%s  string is not  found in %s  string \n ",b,a);
    }  
 	
 	*/
 	/* strpbrk(s1,s2) fonksiyonu ile biz ikinci stringin i�indeki harflerden birinin(hangisi oldu�u �nemli de�il ) 
 	* a fonksiyonu i�inde ilk nerede kar��m�za ��kt���n� buluruz.veoras� dahil bast�r�r�z.
 	char a[]="an�l okula gitt";
 	char b[]="const";
 	printf("%s ",strpbrk(a,b));
 	*/ 
	 /*// strspn(s1,s2) fonksiyonu ile s1 dizisinin i�inde  s2 nin ka� karakterinin oldu�unu buluruz.ineger de�er d�ner.
 	char *a="an�l okula gitti";
 	char *b="ln�a kulao ";
 	
 	printf("%d",strspn(a,b));
 	*/
 
 	// strcspn(s1,s2) fonksiyonu ile s2 dizisinin ka� eleman�n s1 in i�inde olmad���n� buluruz.
 	char a[]="an�l okula saat 01.00 da gitti.";
 	char b[]="1234567890";
 	printf("%d",strcspn(a,b));
 	
 	//strtok() tokenizm;ay�rma i�lemidir.
 	char a[]="an�l,okula gitti.Sonra geldi ";
 	char *p;
 	p=strtok(a," ,.");// biz burada a stringinin i�inde bo�luk( ) nokta(.) virg�l(,) g�rd���m�z yerlerin ay�r�c� ifadeler oldu�unu belirttik.
 	                   // a stringinde bu ifadelerden birini  g�rd���nde '\0' koyacak ve virg�l nokta bo�luktan �nceki ifadesnin ilk harfine 
 	                   // pointer atad�k.
 	while(p!=NULL)
 	{  // B�Z WH�LE de p pointer�n�n '\0' g�r�rse ��k dedi�imizi belirttik 
 	  printf("%s \n",p);
	  p=strtok(NULL," .,"); // burada yazd���m�z p=strtok(NULL," .,"); ifadesi ile nokta virg�l bo�luk g�rd���nde di�er ifadeye ge� dedik.
	                         // yani pointer normalde 	virg�l nokta bo�luk g�rd���nde  '\0' koyacakt� ama bu ifade ile g�rmedi ay�rd� ve
	                         // bir sonraki kelimeye ge�ti.
 	*/
	 	// strlen(a) ile a dizisinin siezesini bulduk.
 	char a[]="an�l,okula gitti.Sonra geldi ";
	 printf("%d",strlen(a));	
 		
 		
	 
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 }
