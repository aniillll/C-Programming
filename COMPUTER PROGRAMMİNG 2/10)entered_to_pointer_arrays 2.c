#include<stdio.h>
main()
{
   int a[5]={1,3,5,7,4};
   int *aptr=a;
   //dizinin adresini bulma pointer �zerinden
    printf("first adress a0= %p \n",aptr);  // aptr pointer� dizinin ilk elemen�n�n adrsini i�inde tutuyor aptr=&a[0]
    printf("second adress a1= %p \n",aptr+1);// e�er biz pointer�n adresine 1 eklersek �nce aptr yani a[0] 'a gidiyor sonra
	                                        //bir ekliyoruz ve bir sonraki adrese gidiyor yani a[1]' in adrsine
    
	printf("third adress a2=%p \n",aptr+2); // +2 yapt���m�zda pointer a �nce aptr bak�yoruz bu a[0] adresini i�inde tutuyor
                                           // bu adrese +2 yapt���m�zda bu adrese geliyor �nce +2 ile 2 adres daha ileri gidip a[2] ye geliyor.
    printf("fourth adress a3=%p \n",aptr+3); // bu ad�mlarda da �nce aptr geliyor bu adres a[0] � tutuyor eklenen tutara g�re eklenen tututar adresine gidiyor.
    printf("fifth adress a4=%p \n\n",aptr+4);
    
    // dizinin pointer�n i�inde tuttu�u adresi kullanarak dizideki de�eri bulma
    
    printf("adress of aptr =a[0] is %d and taken value is %d \n",aptr,*(aptr));
    printf("adress of a[1] = %d and taken value is %d \n",(aptr+1),*(aptr+1));
    printf("adress of a[2] = %d and taken value is %d \n",(aptr+2),*(aptr+2));
    printf("adress of a[3] = %p and taken value is %d \n",(aptr+3),*(aptr+3));
    printf("adress of a[4] = %p and taken value is %d \n",(aptr+4),*(aptr+4));
    /* biz burada ilk ba�ta pointer�n i�ine dizinin ilk eleman�n�n adresini g�nderdik ve 
    �nce biz aptr=a; yap�p pointera ilk eleman�n adresini atad�k
    sanra aptr+1 yaparak �nce aptr pointer�na geldik pointr�n tuttu�u adrese geldik yani a[0] bu hi� de�i�meyecek
    aptr+1 yapt���m�zda a[0] a +1 ekledik  gibi d���n bunu yaparak a[1] adresine geldik ve %p ile bu adresi bast�rd�k
    aptr+2 yapsayd�k �nce aptr a[0] � tutuyor bu adrse +2 yap�cakt�k bve a[2] ye eri�icektik %p ile bu adresi bat�r�cakt�k.
    *(aptr+1) ile �nce aptr gittik aptr i�inde a[0] �n adresini tutuyor bu adrse +1 yap�nca a[1] in adresine gelmi� olduk 
    *ile bu en son adresin i�ine girip de�erini al�r�z ve %d ile bast�rd�k.
    */
    
 
 
 	
	
	
	
	
	
	
}
