#include <iostream>
using namespace std;
int main(){
	int i, j, dizi[2][3], dizi2[2][3], toplam[2][3];
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			cout << i+1 << ". satir " << j+1 << ". sutun degeri girin: ";
			cin>>dizi[i][j];
		}
	}
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			cout << i+1 << ". satir " << j+1 << ". sutun degeri girin: ";
			cin>>dizi2[i][j];
		}
	}
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			toplam[i][j]=dizi[i][j]+dizi2[i][j];
		}
	}
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			cout<<toplam[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

