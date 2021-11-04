#include<stdio.h>

/*
Bir sayý dizisinde en çok tekrarlanan sayýyý ve bu sayýnýn kaç d
Bir sayý dizisinde en çok tekrarlanan sayýyý ve bu sayýnýn kaç defa tekrarlandýðýný bulan C kodunu sizlerle paylaþýyorum. Program öncelikle rastgele 20 tane sayý oluþturuyor. 20 sayýdan en çok tekrar edeni ve bunun kaç defa tekrar ettiðini program bize buluyor. Kodun "#define  SIZE     20" kýsmýnda rastgele sayýlardan oluþacak dizinin kaç elemandan oluþacaðýný biz belirliyoruz, isterseniz bu sayýyý artýra ya da azaltabilirsiniz.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define  SIZE     20


int main()
{
 int a[SIZE];
 int i, k;
 int frequency = 0;
 int mod;
 
 srand(time(0));

 for (k = 0; k < SIZE; ++k) {
  a[k] = rand() % 50;
  printf("%d ", a[k]);
 }
 printf("n************************************************n");


 for (i = 0; i < SIZE; ++i) {
  int counter = 0;
  for (k = 0; k < SIZE; ++k)
   if (a[k] == a[i])
    ++counter;
  if (counter > frequency) {
   frequency = counter;
   mod = a[i];
  }
 }

 printf("mod = %dn", mod);
 printf("frequency = %dn", frequency);


 return 0;
}

 

kaynak        www.gevisgetiren.com
