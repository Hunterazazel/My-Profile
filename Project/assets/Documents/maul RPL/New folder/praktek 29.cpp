#include<stdio.h>
#include<conio.h>
int main(){
	int i, j, batas;
	char nama [25] ;
	
	printf("inputkan angka : ");
	scanf("%i",&batas);
	printf("inputkan nama : ");
	scanf("%s", &nama );
	 for(i=batas; i>= 2;i--){
		for(j=0; j< i;j++){
			printf(" %s ", nama);
		}
		printf("\n");
    }
	return 0;
}
