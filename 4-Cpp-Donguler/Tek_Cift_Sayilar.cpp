//for ile yazdırmak
/*include <iostream>
using namespace std;
int main(){
	int i;
	cout<<"Cift sayilar: \n";
	for(i=0; i<=10; i++){
		if(i%2==0){
			cout<<i<<endl;
		}
	}
	cout<<"Tek sayilar: \n";
	for(i=1; i<=10; i+=2){
		cout<<i<<endl;
	}
	return 0;
}*/

//while ile yazdırmak
/*#include <iostream>
using namespace std;
int main(){
    int i=0;
    cout<<"Cift sayilar: \n";
    while(i<=10){
        if(i%2==0){
            cout<<i<<endl;
        }
        i++;
    }
    cout<<"Tek sayilar: \n";
    i=1;
    while(i<=10){
        cout<<i<<endl;
        i+=2;
    }
    return 0;
}*/

//do-while ile yazdırmak
#include <iostream>
using namespace std;
int main(){
    int i=0;
    cout<<"Cift sayilar: \n";
    do{
        if(i%2==0){
            cout<<i<<endl;
        }
        i++;
    }while(i<=10);
    cout<<"Tek sayilar: \n";
    i=1;
    do{
        cout<<i<<endl;
        i+=2;
    }while(i<=10);
    return 0;
}