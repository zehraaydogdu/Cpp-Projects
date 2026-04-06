#include <iostream>
using namespace std;
int main(){
	char dizi1[]={'C','A','N',' ','B','O','Z'};
	char dizi2[]={'C','E','M'};
	for(int i=0; i<3; i++){
		dizi1[i]=dizi2[i];
	}
	for(int i=0; i<7; i++){
		cout << dizi1[i];
	}
	return 0;
}
