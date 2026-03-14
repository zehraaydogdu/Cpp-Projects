#include <iostream>
using namespace std;
int main(){
	int toplam=1, i;
	cout<<"Faktoriyeli hesaplanacak sayiyi giriniz: ";
	cin>>i;
	for(i; i>1; i--){
		toplam*=i;
	}
	cout<<"Sonucumuz: "<<toplam;
	return 0;
}
