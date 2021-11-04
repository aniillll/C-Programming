#include<stdio.h>
#define SIZE 10
// en önemlisi bu burada pointer offset notasyonunu kullandýk sýnavlarda da bunu yapýcaz
  void bubbleSort(int *arr,int size);
main()
{
	
  int a[SIZE]={2,6,56,3,24,78,45,76,31,93};
  int *aptr,offset;
  aptr=a; // pointer ýn içine dizinin ilk elemanýný atttýk 
      printf("before function called \n");
      for(offset=0;offset<SIZE;offset++)
      {
      	printf("(aptr+%d) =%d \n ",offset,*(aptr+offset));
		// aptr içinde dizinin a[0] cý indeksini içinde tutuyor aptr + offset yaparak (a[0]+1) 	yani a[1] e a[2] ye ulaþýrýz
		// * ile a[1] in a[2] nin a[n] nin adresine gider * ile içine gireriz.
	  }
    bubbleSort(aptr,SIZE);
    // burada fonksiyona a[0] adresini gönderdik aptr içinde a[0] in adresini içinde tutuyor SIZE zaten boyutu dizinin
      printf("\nAfter function called \n");
      for(offset=0;offset<SIZE;offset++)
      {
      	printf("(aptr+%d) =%d \n",offset,*(aptr+offset));
      }
}
    void bubbleSort(int *arr,int size)
    {
    	// burada dizinin ilk elemanýnýn a[0] ýn adresini arr pointerýna yüklenmiþ halede aldýk
    	// artýk arr[0]=a[0] oldu arr[n] üzerinden iþlem yapýyoruz
       // ya da pointer offsetnotasyonu ile yazabiliriz arr[0]=*(arr+0) ayný þey  öreneðin arr[j-1]= *(arr+j-1) ayný þey
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
