#include<stdio.h>

main()
{
  int numbers[10],i,x;
  int *number1ptr=numbers,*number2ptr,*number3ptr,*number4ptr,*number5ptr;	
   for(i=0;i<10;i++)
	{
		numbers[i]=i;
		printf("number[%d] ;%x adress ,value %d \n",i,&numbers[i],numbers[i]);
	}
	// bu programda adresslerle nas�l i�lem yapt���m�z� g�rd�k
   printf("\nthe value of number1ptr =%x \n",number1ptr);//number1ptr numbers[0]�nadresini i�inde tutuyor %p ile bunu bast�rd�k
   printf("the value of *number1ptr = %d \n\n",*(number1ptr));// �nce i�ine gidrik number1ptr pointer �n�n adresine gittik 
                                                // numbers[0] �n adresinii�inde tutuyor bu pointer * ile de�erini bast�rd�k
   
   printf("the value of number1ptr+3 = %x \n",(number1ptr+3)); // number1ptr i�inde numbers[0] �n adresini tutuyor +3 yaparak a[3] eula�t�k
   printf("the value of *(number1ptr+3)= %d\n\n",*(number1ptr+3));
   
   number2ptr=number1ptr+7;
   // burada adreslerle i�lem yapt�k number2ptr pointer�n de adres yok biz ona adress atad�k number1ptr i�inde numbers[0]�n adresini tutuyor
   // buna +7 yapt���m�zda numbers[7]oluyor yani number2ptr pointer �nin i�inde tuttu�u  adres a[7] olur number2ptr=&a[7] ve *number2ptr=a[7] nini i�inde tuttu�usay� olur. 
   
   printf("the value of number2ptr =%x \n",number2ptr);
   printf("the value of *number2ptr = %d \n\n",*(number2ptr));  
   
   printf("the value of number2ptr+2 = %x \n",(number2ptr+2));
   printf("the value of *(number2ptr+2)= %d\n\n",*(number2ptr+2));

   number3ptr=number2ptr-2;
   
   printf("the value of number3ptr =%x \n",number3ptr);
   printf("the value of *number3ptr = %d \n\n",*(number3ptr));  
   
   printf("the value of number3ptr-3 = %x \n",(number3ptr-3));
   printf("the value of *(number3ptr-3)= %d\n\n",*(number3ptr-3));
   
   number4ptr=number3ptr-4;
   
   printf("the value of number4ptr =%x \n",number4ptr);
   printf("the value of *number4ptr = %d \n\n",*(number4ptr));  
   
   printf("the value of number4ptr+3 = %x \n",(number4ptr+3));
   printf("the value of *(number4ptr+3)= %d\n\n",*(number4ptr+3));

   number5ptr=number3ptr+1;
   
   printf("the value of number5ptr =%x \n",number5ptr);
   printf("the value of *number5ptr = %d \n\n",*(number5ptr));  
   
   printf("the value of number5ptr+2 = %x \n",(number5ptr+2));
   printf("the value of *(number5ptr+2)= %d\n\n",*(number5ptr+2));
   
   x=number2ptr-number5ptr;
   printf("number2ptr-number5ptr=%d",x)	;
	
	
}
