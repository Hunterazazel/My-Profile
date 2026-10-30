#include<iostream>
using namespase std;
int main(){
	string username,password;
	
	cout<<"input username : ";
	cin>>username;
	cout<<"imput password : ";
	cin>>password;
	if(username =="raisa"){
		if(password=="123"){
			cout<<"selamat datang bos";
		}else{
			cout<<"password salah bos";
		}
	}else{
		cout<<"password salah bos";
	}
}
