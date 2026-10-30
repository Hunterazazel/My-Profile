#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c;
	
	printf("inputkan nilai pertama : ");
	scanf("%i",&a);
	printf("inputkan nilai kedua : ");
	scanf("%i",&b);

	
	c=a;
	a=b;
	b=c;
	
	printf("\nnilai setelah ditukar tempat");
	printf("\nnilai a = %i",a);
	printf("\nilai b = %i",b);
	return 0;
}
