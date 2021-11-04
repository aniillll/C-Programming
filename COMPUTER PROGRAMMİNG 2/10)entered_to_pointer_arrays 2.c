#include<stdio.h>
main()
{
   int a[5]={1,3,5,7,4};
   int *aptr=a;
   //dizinin adresini bulma pointer üzerinden
    printf("first adress a0= %p \n",aptr);  // aptr pointerý dizinin ilk elemenýnýn adrsini içinde tutuyor aptr=&a[0]
    printf("second adress a1= %p \n",aptr+1);// eðer biz pointerýn adresine 1 eklersek önce aptr yani a[0] 'a gidiyor sonra
	                                        //bir ekliyoruz ve bir sonraki adrese gidiyor yani a[1]' in adrsine
    
	printf("third adress a2=%p \n",aptr+2); // +2 yaptýðýmýzda pointer a önce aptr bakýyoruz bu a[0] adresini içinde tutuyor
                                           // bu adrese +2 yaptýðýmýzda bu adrese geliyor önce +2 ile 2 adres daha ileri gidip a[2] ye geliyor.
    printf("fourth adress a3=%p \n",aptr+3); // bu adýmlarda da önce aptr geliyor bu adres a[0] ý tutuyor eklenen tutara göre eklenen tututar adresine gidiyor.
    printf("fifth adress a4=%p \n\n",aptr+4);
    
    // dizinin pointerýn içinde tuttuðu adresi kullanarak dizideki deðeri bulma
    
    printf("adress of aptr =a[0] is %d and taken value is %d \n",aptr,*(aptr));
    printf("adress of a[1] = %d and taken value is %d \n",(aptr+1),*(aptr+1));
    printf("adress of a[2] = %d and taken value is %d \n",(aptr+2),*(aptr+2));
    printf("adress of a[3] = %p and taken value is %d \n",(aptr+3),*(aptr+3));
    printf("adress of a[4] = %p and taken value is %d \n",(aptr+4),*(aptr+4));
    /* biz burada ilk baþta pointerýn içine dizinin ilk elemanýnýn adresini gönderdik ve 
    önce biz aptr=a; yapýp pointera ilk elemanýn adresini atadýk
    sanra aptr+1 yaparak önce aptr pointerýna geldik pointrýn tuttuðu adrese geldik yani a[0] bu hiç deðiþmeyecek
    aptr+1 yaptýðýmýzda a[0] a +1 ekledik  gibi düþün bunu yaparak a[1] adresine geldik ve %p ile bu adresi bastýrdýk
    aptr+2 yapsaydýk önce aptr a[0] ý tutuyor bu adrse +2 yapýcaktýk bve a[2] ye eriþicektik %p ile bu adresi batýrýcaktýk.
    *(aptr+1) ile önce aptr gittik aptr içinde a[0] ýn adresini tutuyor bu adrse +1 yapýnca a[1] in adresine gelmiþ olduk 
    *ile bu en son adresin içine girip deðerini alýrýz ve %d ile bastýrdýk.
    */
    
 
 
 	
	
	
	
	
	
	
}
