#include<stdio.h>

/*
Bir say� dizisinde en �ok tekrarlanan say�y� ve bu say�n�n ka� d
Bir say� dizisinde en �ok tekrarlanan say�y� ve bu say�n�n ka� defa tekrarland���n� bulan C kodunu sizlerle payla��yorum. Program �ncelikle rastgele 20 tane say� olu�turuyor. 20 say�dan en �ok tekrar edeni ve bunun ka� defa tekrar etti�ini program bize buluyor. Kodun "#define  SIZE     20" k�sm�nda rastgele say�lardan olu�acak dizinin ka� elemandan olu�aca��n� biz belirliyoruz, isterseniz bu say�y� art�ra ya da azaltabilirsiniz.
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
