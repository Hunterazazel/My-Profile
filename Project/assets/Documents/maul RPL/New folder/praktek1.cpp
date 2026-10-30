#include<stdio.h>
#imclude<conio.h>
int main(){
	char username[25];
	int password;
	printf ("masukan username :");
	scanf("%s",&username)
	printf("masukan parssword :");
	scantf("%i",&password);
	if(password==123){
		printf("selamat datang bos");
	}
	else{
		printf("password salah bos");
	}
	return 0;
}
