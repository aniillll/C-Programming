#include<stdio.h>
main()
{
  double b=	3.17;
  double *bptr;
  bptr=&b;
  
  printf("b =%lf\n",b); // %lf is value of b show that to use  //pointer olmayan de�er de de�eri okumak i�in sadece yaz
  printf("b =%x \n",&b);// %x or %p is to be used that show &b b adressses 
                    // pointer olmayan bir adresi okumak i�in de�i�kenin �n�ne & koy.
  
  printf("*bptr value is %lf \n",*bptr); //*bptr bptr ile adrese(pointerlar adress tutar yani b nin adresini tutuyor)  git * ile adresin  i�ine gir ve de�eri  oku demek 
  printf("*bptr adress is %x \n",bptr);  // pointer larda adresi okumak i�in * koymaya gerek yok y�ld�zs�z pointer � yaz
                                          // pointerlar de�i�kenlerin adresini tutarlar bptr b nin adresi demek
                                          // *bptr bpointer � b nin adresini tutuyor b nin adresine git * ile adresin i�ine gir de�eri oku.
  
  printf("the value of *&b is %lf \n",*&b);// c de sa�dan sola do�ru okunu �nce b gelir &la adresine gider bnin 
                                       // sonra * la adresin i�ine girer de�eri okur
  printf("the value of *&bptr is %p\n",*&bptr);
  printf("the value of &*bptr is %p \n",&*bptr); //*& or &* beraber kullan�l�rsa bunlar birbirini g�t�r�r c kalan� okur.
  
	
	
return 0;	
}
