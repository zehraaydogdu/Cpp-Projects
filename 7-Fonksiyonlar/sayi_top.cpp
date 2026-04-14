#include <iostream>
using namespace std;

//Geriye deðer döndürmeden:
/*void toplam(){
	int a, b, top=0;
	cout<<"Lutfen iki sayi giriniz: ";
	cin>>a>>b;
	top=a+b;
	cout<<top;
}

int main(){
	toplam();
}*/


//Geriye deðer döndürerek:
int topla(){
	int a, b;
	cout<<"Lutfen iki sayi giriniz: ";
	cin>>a>>b;
	return a+b;
}

int main(){
	int toplam;
	toplam=topla();
	cout<<toplam;
	return 0;
}
