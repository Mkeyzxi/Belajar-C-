#include <iostream>
using namespace std;

int main(){
	int bilangan;
	
	cout << "masukkan bilangan untuk menentukan ganjil genap : ";
	cin >> bilangan;	
	switch(bilangan % 2){
		case 0:
			cout << bilangan << " adalah bilangan genap" << endl;
			break;
		case 1:
			cout << bilangan << " adalah bilangan ganjil" << endl;
			break;
		default:
			cout << "yang ada masukkan tidak terbaca !" << endl;
			break;
	}	
	return 0;
		
}
