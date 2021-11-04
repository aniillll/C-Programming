#include<stdio.h>
#define SIZE 10
// en �nemlisi bu burada pointer offset notasyonunu kulland�k s�navlarda da bunu yap�caz
  void bubbleSort(int *arr,int size);
main()
{
	
  int a[SIZE]={2,6,56,3,24,78,45,76,31,93};
  int *aptr,offset;
  aptr=a; // pointer �n i�ine dizinin ilk eleman�n� attt�k 
      printf("before function called \n");
      for(offset=0;offset<SIZE;offset++)
      {
      	printf("(aptr+%d) =%d \n ",offset,*(aptr+offset));
		// aptr i�inde dizinin a[0] c� indeksini i�inde tutuyor aptr + offset yaparak (a[0]+1) 	yani a[1] e a[2] ye ula��r�z
		// * ile a[1] in a[2] nin a[n] nin adresine gider * ile i�ine gireriz.
	  }
    bubbleSort(aptr,SIZE);
    // burada fonksiyona a[0] adresini g�nderdik aptr i�inde a[0] in adresini i�inde tutuyor SIZE zaten boyutu dizinin
      printf("\nAfter function called \n");
      for(offset=0;offset<SIZE;offset++)
      {
      	printf("(aptr+%d) =%d \n",offset,*(aptr+offset));
      }
}
    void bubbleSort(int *arr,int size)
    {
    	// burada dizinin ilk eleman�n�n a[0] �n adresini arr pointer�na y�klenmi� halede ald�k
    	// art�k arr[0]=a[0] oldu arr[n] �zerinden i�lem yap�yoruz
       // ya da pointer offsetnotasyonu ile yazabiliriz arr[0]=*(arr+0) ayn� �ey  �rene�in arr[j-1]= *(arr+j-1) ayn� �ey
	int i,j,temp;
	   for(i=0;i<size;i++)
	   {
	     for(j=1;j<size-i;j++)
	     {
	     	if(*(arr+j-1)>*(arr+j))
	     	{
	     	 temp=*(arr+j);
			  *(arr+j)=*(arr+j-1);
			  *(arr+j-1)=temp;	
			 }
	     	
		 }
	   }	
    	
    	
    	
	}
