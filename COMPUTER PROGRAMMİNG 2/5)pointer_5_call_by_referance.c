#include <stdio.h>

void degerdegistirme (int *aptr,int *bptr);

main()
{
int x=5	,y=8;

degerdegistirme(&x,&y); // x ve y nin de�erlerini g�derdik pointer a en sonda de�erlerin de�i�mesi i�in buna 
                         // call by referance yani adressle g�nderme denir. E�ER de�erimizin fonk bittikten 
                         // sonrada de�i�mesini istiyorsak pointerla de�er g�ndermemiz gerekiyor.
	
	printf("%d =x %d =y",x,y);
	// bura da fonk bittikten sonra x ve y nin de�erleri de�i�ti ��nk� pointerlara x ve ynin de�erini g�derdik ve de�erler kal�c� de�i�ti.
}
void degerdegistirme (int *aptr,int *bptr)
{
	int gecici;
	gecici=*aptr;
	*aptr=*bptr;
	*bptr=gecici;
	
	
	
	
	
}
