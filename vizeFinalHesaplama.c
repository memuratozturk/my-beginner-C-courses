#include <stdio.h>
int main(){

/*
klavyeden girilen vize ve final sınavlarının notlarından bir öğrencinin 
dönem not ortalamasını hesaplayan C programı.
not: vize sınavının katkısı %40 final sınavının katkısı %60 olsun. 
*/
int vize, final;
int ort;
printf("vize notunuzu giriniz: \n");
scanf("%d", &vize);
printf("vizeniz %d", vize);
printf("\n final notunuzu giriniz : ");
scanf("%d", &final);
printf("final notunuz : %d", final);
ort = (vize * 0.4) + (final * 0.6);
printf("\n ortalamanız %d \n", ort);
 // buradan sonrasını ben ekledim.
if(ort>80) printf("AA");
else if (ort>75) printf("AB");
else if (ort>60) printf("BB");
else printf("kaldın cahil (ilber hocayı anımsadım.)");

}
