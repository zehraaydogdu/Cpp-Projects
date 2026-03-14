//If-Else Yapısıyla Hesap Makinesi

/*#include <iostream>
using namespace std;
int main(){
	int x, y;
	char karakter;
	cout<<"Lutfen iki sayi giriniz: ";
	cin>>x>>y;
	cout<<"Lutfen bir karakter giriniz (+ - * /): ";
	cin>>karakter;
	if(karakter=='+'){
		cout<<"Sonuc: "<<x+y;
	}
	else if(karakter=='-'){
		cout<<"Sonuc: "<<x-y;
	}
	else if(karakter=='*'){
		cout<<"Sonuc: "<<x*y;
	}
	else if(karakter=='/'){
		if(y==0){
			cout<<"Tanimsiz.";
		}
		else{
			cout<<"Sonuc: "<<(float)x/y;
		}
	}
	else{
		cout<<"Eksik veya hatali giris gerceklestirdiniz.";
	}
	return 0;
}*/

//Switch-Case Yapısıyla Hesap Makinesi
#include <iostream>
using namespace std;
int main(){
	int x, y;
	char karakter;
	cout<<"Lutfen iki sayi giriniz: ";
	cin>>x>>y;
	cout<<"Lutfen bir karakter giriniz (+ - * /): ";
	cin>>karakter;
	switch(karakter){
		case '+': cout<<"Sonuc: "<<x+y;
		break;
		case '-': cout<<"Sonuc: "<<x-y;
		break;
		case '*': cout<<"Sonuc: "<<x*y;
		break;
		case '/': if(y==0){
					cout<<"Tanimsizdir";
				}
				else{
					cout<<"Sonuc: "<<(float)x/y;
				}
		break;
		default: cout<<"Eksik veya hatali giris gerceklestirdiniz.";
		break;
	}
	return 0;
}
