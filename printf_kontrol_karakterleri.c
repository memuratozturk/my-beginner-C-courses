#include <stdio.h>

int main(){

char karakter = 'A';

printf("\a \\a öğrneği 65'in ascii karşiligi %c'dir ", karakter);
//alert üretir.
printf("\n \\n örneği 65'in ascii karşiligi %c'dir ", karakter);
//bir alt satıra geçer.
printf("\r \\r örneği 65'in ascii karşiligi %c'dir ", karakter);
//satır başı yaptırırç
printf("\t \\t örneği 65'in ascii karşiligi %c'dir ", karakter);
// yatay tab.
printf("\f \\f örneği 65'in ascii karşiligi %c'dir ", karakter);
// sayfayı atla bir sonraki sayfanın başına geçir.
printf(" sade olan 65'in ascii karşiligi %c'dir ", karakter);
// kontrol karakteri olmadan.
printf("\v \\v örneği 65'in ascii karşiligi %c'dir \v", karakter);
// dikey tab
printf("\a \\a öğrneği A'in ascii karşiligi %c'dir \a ", karakter);
// alert üretir

// çift tırnak için \" ve tek tırnak için \'  
// %% de % karakterini yazdırır.
 return 0;

}
