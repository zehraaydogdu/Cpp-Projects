#include <iostream>
using namespace std;

void IsimYazdir(){
	string isim;
	cout << "Lutfen isminizi ve soy adinizi girin: ";
	getline(cin, isim);
	cout << isim;
}

int main(){
	IsimYazdir();
return 0;
}
