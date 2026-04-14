#include <iostream>
using namespace std;

int usAl(int a, int b){
	if(b==0){
		return 1;
	}
	else if(b==1){
		return a;
	}
	return a*usAl(a, b-1);
}

int main(){
	int taban, us;
    cout << "Taban sayisini girin: ";
    cin >> taban;
    cout << "Ussunu girin: ";
    cin >> us;
	if (us < 0){
        cout << "Bu program sadece pozitif usler icindir!" << endl;
    } 
	else{
        cout << taban << "^" << us << " = " << usAl(taban, us) << endl;
    }
	return 0;
}
