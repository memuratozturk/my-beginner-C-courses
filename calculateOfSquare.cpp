// easy a C code for calculation in a square area.
#include <stdio.h>
int main(){
	
	int edge;
	int area;
	
	printf("edge length of square : ");
	
	scanf("%d", &edge);
	area= edge * edge;
	
	printf("area of the square : %d\n", area);
	
	return 0;
	
}

