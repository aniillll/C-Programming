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
	// bu programda adresslerle nasıl işlem yaptığımızı gördük
   printf("\nthe value of number1ptr =%x \n",number1ptr);//number1ptr numbers[0]ınadresini içinde tutuyor %p ile bunu bastırdık
   printf("the value of *number1ptr = %d \n\n",*(number1ptr));// önce içine gidrik number1ptr pointer ının adresine gittik 
                                                // numbers[0] ın adresiniiçinde tutuyor bu pointer * ile değerini bastırdık
   
   printf("the value of number1ptr+3 = %x \n",(number1ptr+3)); // number1ptr içinde numbers[0] ın adresini tutuyor +3 yaparak a[3] eulaştık
   printf("the value of *(number1ptr+3)= %d\n\n",*(number1ptr+3));
   
   number2ptr=number1ptr+7;
   // burada adreslerle işlem yaptık number2ptr pointerın de adres yok biz ona adress atadık number1ptr içinde numbers[0]ın adresini tutuyor
   // buna +7 yaptığımızda numbers[7]oluyor yani number2ptr pointer ınin içinde tuttuğu  adres a[7] olur number2ptr=&a[7] ve *number2ptr=a[7] nini içinde tuttuğusayı olur. 
   
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
