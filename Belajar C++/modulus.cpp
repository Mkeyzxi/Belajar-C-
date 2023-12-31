#include <iostream>
using namespace std;


int main(){
	int hasil,a,b;
	
	do {
	
	cout << "\nmasukan nilai a dan b : ";
	cin >> a >> b;
	hasil = a / b;
	cout << endl;
	cout << "bagi : " << hasil;
	hasil = a % b;
	cout << endl;
	cout << "modulus : " << hasil;
	
	
	
	} while(true);
	
}
