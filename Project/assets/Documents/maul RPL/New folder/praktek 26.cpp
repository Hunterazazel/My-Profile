#include<iostream>
using namespace std;
int main(){
	char keluar='t';
	int coumter=0;
	
	while(keluar == 't'){
		cout<<"apakah ingin keluar dari laman ini??";
		cout<<"jawab (y/t)";
		cin>>keluar;
	    counter++;
	}
	cout<<"\n\n================\n";
	cout<<"kamu sudah berulang sebanyak",<<couter<<"kali";
	return 0;
}
