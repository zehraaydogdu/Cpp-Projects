#include <iostream>
using namespace std;
int main(){
	int x, y;
	cout<<"Lutfen iki sayi giriniz: ";
	cin>>x>>y;
	if(x>y){
		cout<<"En buyuk sayi "<<x<<"dir";
	}
	else if(y>x){
		cout<<"En buyuk sayi "<<y<<"dir";
	}
	else{
		cout<<"Sayilar birbirine esittir";
	}
	return 0;
}
