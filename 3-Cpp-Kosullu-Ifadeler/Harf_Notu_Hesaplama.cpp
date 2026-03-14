#include <iostream>
using namespace std;
int main(){
	int x, y;
	float ort;
	cout<<"Lutfen matematik sinav notlarini sirasiyla giriniz: ";
	cin>>x>>y;
	ort=(x+y)/2;
	if(ort>=90){
		cout<<"Harf notu degeri AAdir";
	}
	else if(ort>=80){
		cout<<"Harf notu degeri BAdir";
	}
	else if(ort>=70){
		cout<<"Harf notu degeri BBdir";
	}
	else if(ort>=60){
		cout<<"Harf notu degeri CBdir";
	}
	else if(ort>=50){
		cout<<"Harf notu degeri CCdir";
	}
	else{
		cout<<"Harf notu degeri FFdir";
	}
	return 0;
}
