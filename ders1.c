#include <stdio.h>
/*
ön işlemci direktifleri # işareti ile başlar.
#include ve #define en sık kullanılan ön işlemci direktifleridir.
#include <stdio.h> >> açılımı standart input output heder dir.
#include kütüphaneyi içeri aktarmamızı sağlar. bu sayede kütüphane içinedki fonksiyonları kullanabiliriz.
#define tanımlamadır.
örnek 
#define YEAR 2015
Bu kod YEAR olan yere 2015 yazacaktır.
%d >> "%d" tırnak içinde %d dersek bu adresten dönecek değerin int türünden olduğunu belirtir.
eng:
preprocessor directives begin with the # sign.
#include and #define are the most common preprocessor directives.
#include <stdio.h> >> stands for standard input output header.
#include allows us to import the library. In this way, we can use the functions in the library.
#define is the definition.
sample
#define YEAR 2015
This code will write 2015 where YEAR is.
%d >> "%d" indicates that if we say %d in quotes, the value to return from this address is of type int.
*/

#define MAK01 "ABCDE"

int main(void)
{
  printf(MAK01); // = printf("ABCDE");

  return 0;
}

