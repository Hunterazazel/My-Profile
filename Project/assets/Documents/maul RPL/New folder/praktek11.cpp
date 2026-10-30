#include<stdio.h>
#include<conio.h>
int main(){
	char nm_kamu[50],nm_teman[50];
	int tl_kamu,tl_teman,selisih;
	printf("masukan nama kamu:");
	scanf("%s",&nm_kamu);
	printf("masukan tanggal lahir kamu:");
	scanf("%i",&tl_kamu);
	
	
	
	printf("inputkan nama kamu :");
	scanf("%s",&nm_kamu);
	printf("inputkan nama teman kamu :");
	scanf("%s",&nm_teman);
	printf("inputkan tahum lahir kamu :");
	scanf("%i",&tl_kamu);
	printf("inputkan tahun lahir teman kamu :");
	scanf("%i",&tl_teman);
	
	selisih =tl_kamu-tl_teman;
	
	

	printf("\nselisih umurmu dengan teman kamu adalah : %d",selisih);
	return 0;
}
