#include <iostream>
using namespace std;
int main(){
	int gun;
	cout<<"Haftanin kacinci gununu ogrenmek istiyorsunuz: ";
	cin>>gun;
	if(gun==1){
		cout<<"Secilen gun Pazartesidir";
	}
	else if(gun==2){
		cout<<"Secilen gun Salidir";
	}
	else if(gun==3){
		cout<<"Secilen gun Carsambadir";
	}
	else if(gun==4){
		cout<<"Secilen gun Persembedir";
	}
	else if(gun==5){
		cout<<"Secilen gun Cumadir";
	}
	else if(gun==6){
		cout<<"Secilen gun Cumartesidir";
	}
	else if(gun==7){
		cout<<"Secilen gun Pazardir";
	}
	else{
		cout<<"Gecerli gun degeri girmediniz.";
	}
	return 0;
}
