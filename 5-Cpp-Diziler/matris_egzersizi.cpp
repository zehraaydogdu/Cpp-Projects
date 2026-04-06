#include <iostream>
using namespace std;
int main(){
	int i, j, dizi[2][3];
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			cout << i+1 << ". satir " << j+1 << ". sutun degeri girin: ";
			cin>>dizi[i][j];
		}
	}
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			cout<<dizi[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
