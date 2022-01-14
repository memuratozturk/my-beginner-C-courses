#include <stdio.h>
int main(){
    /*
    tip belirleyiciler :
                            yazdırılacak tip
    %c tek bir karakter >>       char
    %s karakter dizgisi(string)  char
    %d işaretli tam sayı         int,short
    %ld uzun işaretli tam sayı   long
    %u işaretsiz tam sayı       unsigned int, unsigned short
    %lu işaretsiz büyük tam sayı unsigned long
    %f az haneli ondalıklı sayı    float
    %lf çok haneli ondalıklı sayı  double
*/

char karakter = 'A';
printf("%c", karakter);

char isim[] = "Murat";
printf("\n %c", isim[0]);
// indisler 0'dan başlar sonuncu indisten sonra \0 yerleştirilir.
// Tip karakterleri kullanılarak birden çok veri tipi yazdırılabilir
int grade = 60;
float pi = 3.1415;
char ch = 'A';
printf("\n grade = %d , pi = %f ve ch = %c dir", grade, pi, ch);
int a = 2, b = 10, c = 50;
float f = 1.05, g = 25.5, h = -0.1, yuzde;
printf("3 tamsayi : %d %d %d\n", a, b, c);
printf("3 tamsayi [TAB] : %d \t%d \t%d\n", a, b, c);
printf("\n");
printf("3 ondalik sayi (yanyana) : %f %f %f\n", f, g, h);
printf("3 ondalik sayi (altalta) : \n%f\n%f\n%f\n\n", f, g, h);
yuzde = 220 * 25/100.0;
printf("220 nin %%25 i %f dir\n", yuzde);
printf("%f/%f isleminin sonucu = %f\n", g, f, g / f);
printf("\nprogram sonunda beep sesi cikar...\a \n");

int karSay;
int sayi = 1234;
karSay = printf("Ugurlu sayim = %d\n",sayi);
printf("Ust satirda karakter sayisi: %d dir\n", karSay);

int t;
float z;
printf("Bir ondalik sayi girin:");
scanf("%f",&z);
printf("Bir tamsayi girin: ");
scanf("%d",&t);
printf("\n");
printf("\t %f * %f = %f\n",z,z,z*z);
printf("\t %d * %d = %d\n",t,t,t*t);

// geçici depolamanın kullandığı değişken türleri auto ve register'dir geçici depolamada değişken işi bittiğinde silinir; kalıcı depolamada 
    // değişken program boyunca tutulur.
    // deçici tanımlama: 
auto float x,y; // kullanım örneği
float i,p; // default auto sınıfında
register int m,n; // yazmaçlar 
   /* kalıcı depolama biriminde kullanılan değişken tanımlama:
   extern
   static
   örnek:
   extern float tcNo;
   static char adSoyad[20];
   extern demek global değişken ön tanımlı sayılır.
   global değişkenleri main'den önce tanımla!
   bazı durumlarda bir blok içindeki değişkenin program boyunca bellekte kalması istenebilir bu gibi durumda static kullanacağız.
   */
    // emnumun işi sıralayıp grup sırası veriyor.
    
    enum takimlar {BJK = 1, FB, GS = 2, TS};
printf ("BJK = %d\n" , BJK) ;
printf ("FB = %d\n", FB) ;
printf ("GS = %d\n" , GS ) ;
printf ("TS = %d\n" , TS) ;
    /* çıktısı:
    
     BJK = 1
FB = 2
GS = 2
TS = 3
sıralamaya verilen numaradan başlıyor. eğer hiç numara verilmemiş ise sıfırdan başlar.
    
    */
    
}
