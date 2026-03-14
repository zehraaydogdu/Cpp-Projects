#include <iostream>
using namespace std;
int main(){
	int minYas=18, yas;
	cout<<"Lutfen yasinizi girin: ";
	cin>>yas;
	if(yas>=minYas){
		cout<<"Ehliyet alabilirsiniz.";
	}
	else{
		cout<<"Ehliyet alamazsiniz.";
	}
	return 0;
}
