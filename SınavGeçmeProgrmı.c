#include <stdio.h>
#include <unistd.h>
#include <time.h>
void main(){

while(1){
int ogr1;
printf("\n Notu giriniz: ");
scanf("%d", &ogr1);
printf("\n öğrenci notu : %d  \t \n ", ogr1);
if(ogr1 > 50){

	printf("Geçti");


}
else if (ogr1>30 && ogr1<=50) printf("şartli geçti");

else printf("Geçemedi");


}
}

