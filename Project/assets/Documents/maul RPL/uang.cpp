#include <stdio.h>
int main(){
	int pulpen=3000;
	int uang=20000;
	
	int kembalian= uang - pulpen;
	
	printf("\nSaya memiliki uang sebesar Rp. %i", uang);
	printf("\nKemudian saya membeli pulpen dengan harga Rp. %i", pulpen);
	
	printf("\nMaka kembalian uang saya adalah Rp. %i", kembalian);
	
	return 0;
}
