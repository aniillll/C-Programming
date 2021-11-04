#include <stdio.h>

void degerdegistirme (int *aptr,int *bptr);

main()
{
int x=5	,y=8;

degerdegistirme(&x,&y); // x ve y nin deðerlerini göderdik pointer a en sonda deðerlerin deðiþmesi için buna 
                         // call by referance yani adressle gönderme denir. EÐER deðerimizin fonk bittikten 
                         // sonrada deðiþmesini istiyorsak pointerla deðer göndermemiz gerekiyor.
	
	printf("%d =x %d =y",x,y);
	// bura da fonk bittikten sonra x ve y nin deðerleri deðiþti çünkü pointerlara x ve ynin deðerini göderdik ve deðerler kalýcý deðiþti.
}
void degerdegistirme (int *aptr,int *bptr)
{
	int gecici;
	gecici=*aptr;
	*aptr=*bptr;
	*bptr=gecici;
	
	
	
	
	
}
