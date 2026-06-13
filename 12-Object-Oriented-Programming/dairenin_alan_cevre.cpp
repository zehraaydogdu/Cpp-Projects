#include <iostream>
#include <cmath>
using namespace std;
const float PI=3.14;
class Hesaplama{
private:
	double r;
public:
	Hesaplama(double yaricap):r(yaricap){}
	double alani_hesapla(){
		return PI*pow(r, 2);
	}
	double cevreyi_hesapla(){
		return PI*2*r;
	}
};
int main(){
	double r, alan, cevre;
	cout << "Lutfen yaricap degeri girin: ";
	cin >> r;
	Hesaplama daire(r);
	alan=daire.alani_hesapla();
	cevre=daire.cevreyi_hesapla();
	cout << "Alan: "<< alan << endl;
	cout << "Cevre: "<< cevre<< endl;
	return 0;
}
