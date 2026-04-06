#include <iostream>
using namespace std;

int main(){
    int i, n, dizi[10];

    cout << "Dizi boyutunu giriniz: ";
    cin >> n;

    for(i=0; i<n; i++){
        cout << "Lutfen " << i+1 << ". sayiyi girin: ";
        cin >> dizi[i];
    }

    for(i=0; i<n; i++){
        cout << i+1 << ". sayi: " << dizi[i] << endl;
    }

    return 0;
}
