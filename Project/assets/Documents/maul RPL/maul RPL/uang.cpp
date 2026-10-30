#include <stdio.h>
int main(){
	int pulpen=3000;
	int uang=20000;
	
	int kembalian= uang - pulpen;
	
	printf("\nsaya membeli dengan harga Rp. %i", pulpen);
	printf("\nkemudian saya membeli dengan uang pecahan Rp. %i", uang);
	printf("\nmaka kembalian uang saya adalah Rp. %i", kembalian);
	
	return 0;
}
