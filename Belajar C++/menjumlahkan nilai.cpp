#include <iostream>
using namespace std;


	
int main(){
	int input;
	int array[input];
	cout << "berapa nilai yang ingin anda masukkan : ";
	cin >> input;
	
	for(int i = 0; i < input; i++){
		cout << "tampilkan angka yang ingin dijumlahkan : ";
		cin >> array[i] >> array[i+1] >> array[i+2] >> array[i+3] >> array[i+4];
		
		
		array[i] += array[input];
			cout << " " << array[i] << ", ";
		
	}
	
	
//	for(int g = 0; g < input/2; g++){
//	
//	}

}
