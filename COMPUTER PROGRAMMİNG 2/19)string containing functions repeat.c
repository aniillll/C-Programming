#include<stdio.h>
#include<string.h>
 main()
 {
 	 	/*strcpy()function b nin içine a yý kopyaladýk bu fonksiyonla.b artýk boþ deðil yeni kopyalanan oldu.
   char a[]="anil okula gitti";
   char b[20]=" ";
   strcpy(b,a);
   printf("b : %s \n ",b);
    */	
 strncpy() fonksiyonu ile a nýn 5 karakterini b nin içine kopyaladýk.b artýk boþ deðil yeni kopyalanan oldu.
 char a[]="anýl okula gitti";
 char b[20]="";
 strncpy(b,a,5);
 b[5]='\0'; // sadece strncpy de en sona null koymuyor onu eklemeyi unutma!!!
 printf("a :%s \n",a);
 printf("b :%s \n",b);
 */
     strcat() fonksiyonu ile ikinci ifadeyi ilkinin arkasýna ekledik ,arkaya ekleme iþlemlerinde kullanýlýr.
    char a[]=" anýl ";
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
 	   strncat() ikincinin n tane karakterini ilkine kopyalýyor.
 	   char a[]="ahmet okula ";
 	   char b[]="gitti.";
 	   strncat(a,b,6);
        printf("a :%s \n",a);
        printf("b :%s \n",b); 	
 	   */
 	strcmp() fonksiyonun da ilk stringin harfleri ile ikinci stringin harflerini karþýlaþtýrýyor eðer a>b ascýý table da 1 dönüyor 
	  a=b "anýl" ,"anýl" gibi iki string varsa 0 dönür a<b den -1 dönüyor. 
 	char a[]="anýl";
 	char b[]="büsra";
 	int c;
 	c=strcmp(a,b);
 	printf("%d",c);
 	*/
 	char a[]="anýl";
 	char b[]="anilo";
 	int c;
 	int d;
 	c=strncmp(a,b,2);// a ve b string(dizi)lerinin ilk 2 elemanýnýnýn sýrasýný ascýý table kýyaslýyor.
 	printf(" strncmp(a,b,2)= %d \n",c);
 	d=strncmp(a,b,3);
 	printf("strncmp(a,b,3)= %d \n",d);
 	*/
 	 strchr() fonksiyonu ile bir karakterin ilk kez baþtan sona nerede bulunduðunu öðreniyoruz.
 	*eðer karakter varsa karakterin olduðu yere bir pointer koyup o ve oradan sonrasýný bastýrýr.
 	*eðer yoksa karakter null döner.
 	char *a="anýl okula gitti";
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
 	//strrchr()fonksiyonu aradýðýmýz bir harfin en son nerede olduðunu söyler.
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
 	
 	// strstr() ikinci stringi ilk string içinde arýyoruz.
 	char *a="anýl okula gitti.";
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
 	/* strpbrk(s1,s2) fonksiyonu ile biz ikinci stringin içindeki harflerden birinin(hangisi olduðu önemli deðil ) 
 	* a fonksiyonu içinde ilk nerede karþýmýza çýktýðýný buluruz.veorasý dahil bastýrýrýz.
 	char a[]="anýl okula gitt";
 	char b[]="const";
 	printf("%s ",strpbrk(a,b));
 	*/ 
	 /*// strspn(s1,s2) fonksiyonu ile s1 dizisinin içinde  s2 nin kaç karakterinin olduðunu buluruz.ineger deðer döner.
 	char *a="anýl okula gitti";
 	char *b="lnýa kulao ";
 	
 	printf("%d",strspn(a,b));
 	*/
 
 	// strcspn(s1,s2) fonksiyonu ile s2 dizisinin kaç elemanýn s1 in içinde olmadýðýný buluruz.
 	char a[]="anýl okula saat 01.00 da gitti.";
 	char b[]="1234567890";
 	printf("%d",strcspn(a,b));
 	
 	//strtok() tokenizm;ayýrma iþlemidir.
 	char a[]="anýl,okula gitti.Sonra geldi ";
 	char *p;
 	p=strtok(a," ,.");// biz burada a stringinin içinde boþluk( ) nokta(.) virgül(,) gördüðümüz yerlerin ayýrýcý ifadeler olduðunu belirttik.
 	                   // a stringinde bu ifadelerden birini  gördüðünde '\0' koyacak ve virgül nokta boþluktan önceki ifadesnin ilk harfine 
 	                   // pointer atadýk.
 	while(p!=NULL)
 	{  // BÝZ WHÝLE de p pointerýnýn '\0' görürse çýk dediðimizi belirttik 
 	  printf("%s \n",p);
	  p=strtok(NULL," .,"); // burada yazdýðýmýz p=strtok(NULL," .,"); ifadesi ile nokta virgül boþluk gördüðünde diðer ifadeye geç dedik.
	                         // yani pointer normalde 	virgül nokta boþluk gördüðünde  '\0' koyacaktý ama bu ifade ile görmedi ayýrdý ve
	                         // bir sonraki kelimeye geçti.
 	*/
	 	// strlen(a) ile a dizisinin siezesini bulduk.
 	char a[]="anýl,okula gitti.Sonra geldi ";
	 printf("%d",strlen(a));	
 		
 		
	 
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 }
