// easy a C code for calculation in a square area.
#include <stdio.h>
int main(){
	
	int edge;
	int area;
	
	printf("edge length of square : ");
	
	scanf("%d", &edge);
	/* tırnak içinde %d kullanmak adresten dönecek değerin int türden olduğunu belirtir. scan edip kullanıcıdan aldığımız değerin int olacağını tanımlar.
	 eğer noktalı sayı girersek bunu int'e dönüştürür.
	 Using %d in quotes indicates that the return value from the address is of type int. It defines that the value we scan and get from the user will be an int.
	 if we enter a dotted number it will convert it to an int.
	  & işareti adres operatörüdür alınan değerin hangi değişkene aktarılacağını gösterir.
	 The & sign is the address operator, it indicates which variable the received value will be transferred to.
	*/
	area= edge * edge;
	
	printf("area of the square : %d\n", area);
	
	return 0;
	
}

