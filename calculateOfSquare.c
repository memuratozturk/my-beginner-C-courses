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
	// %d and \n are special characters so we won't see them. %d is a numeric value and \n jump to a lower line.
	// The variable name comes after the comma.
	// %d ve \n özel karakterlerdir, bu yüzden onları görmeyeceğiz. %d sayısal bir değerdir ve \n bir alt satıra atlar.
	// Değişken ismi virgülden sonra gelir.
	
	return 0;
	// return 0; meaning is the end of this code block.
	// return 0; anlamı bu kod bloğunun sonlandığı anlamına gelir.
	// if we didn't write return 0; this code will enter an endless loop.
	// return 0; yazmasaydık kod sonsuz döngüye girecekti.
}

