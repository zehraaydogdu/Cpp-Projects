#include <iostream>
using namespace std;

class Hesaplama{
private:
	double uzun, kisa;
public:
	Hesaplama(double u, double k):uzun(u), kisa(k){}
	double cevre_hesapla(){
		return 2*(uzun+kisa);
	}
	double alan_hesapla(){
		return uzun*kisa;
	}
};

int main(){
	double uzunkenar, kisakenar, cevre, alan;
	cout << "Lutfen once uzun sonra kisa kenar uzunlugunu giriniz: ";
	cin >> uzunkenar >> kisakenar;
	Hesaplama dikdortgen(uzunkenar, kisakenar);
	cevre=dikdortgen.cevre_hesapla();
	alan=dikdortgen.alan_hesapla();
	cout<< "Alan: "<< alan <<endl<< "Cevre: "<< cevre<< endl;
	return 0;
}
