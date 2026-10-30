#include<stdio.h>
#include<conio.h>
#define phi 3.14
int main(){
	int jari2;
	float luas,keliling;
	
	printf("inputkan nilai jari - jari : ");
	scanf("%i",&jari2);
	
	luas=phi*jari2*jari2;
	keliling=2*phi*jari2;
	
	printf("hasil luas lingkaran adalah %i",luas);
	printf("\nhasil keliling lingkaran adalah %f", keliling);
	return 0;
}
