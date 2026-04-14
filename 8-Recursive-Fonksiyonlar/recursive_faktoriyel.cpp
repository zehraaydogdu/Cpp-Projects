#include <iostream>
using namespace std;

int faktoriyel(int sayi){
	if(sayi<=1){
		return 1;
	}
	return sayi * faktoriyel(sayi - 1);
}

int main(){
	int sayi;
	cout<<"Lutfen bir sayi giriniz: ";
	cin>>sayi;
	if (sayi < 0) {
        cout << "Negatif sayilarin faktoriyeli tanimsizdir." << endl;
    }
	else{
        cout << sayi << "! = " << faktoriyel(sayi) << endl;
    }
	return 0;
}
