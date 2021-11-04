#include<stdio.h>
main()
{
  double b=	3.17;
  double *bptr;
  bptr=&b;
  
  printf("b =%lf\n",b); // %lf is value of b show that to use  //pointer olmayan deðer de deðeri okumak için sadece yaz
  printf("b =%x \n",&b);// %x or %p is to be used that show &b b adressses 
                    // pointer olmayan bir adresi okumak için deðiþkenin önüne & koy.
  
  printf("*bptr value is %lf \n",*bptr); //*bptr bptr ile adrese(pointerlar adress tutar yani b nin adresini tutuyor)  git * ile adresin  içine gir ve deðeri  oku demek 
  printf("*bptr adress is %x \n",bptr);  // pointer larda adresi okumak için * koymaya gerek yok yýldýzsýz pointer ý yaz
                                          // pointerlar deðiþkenlerin adresini tutarlar bptr b nin adresi demek
                                          // *bptr bpointer ý b nin adresini tutuyor b nin adresine git * ile adresin içine gir deðeri oku.
  
  printf("the value of *&b is %lf \n",*&b);// c de saðdan sola doðru okunu önce b gelir &la adresine gider bnin 
                                       // sonra * la adresin içine girer deðeri okur
  printf("the value of *&bptr is %p\n",*&bptr);
  printf("the value of &*bptr is %p \n",&*bptr); //*& or &* beraber kullanýlýrsa bunlar birbirini götürür c kalaný okur.
  
	
	
return 0;	
}
