#include <iostream>
using namespace std;


	
int main(){
	int input;
	int array1[input];
	cout << "berapa nilai yang ingin anda masukkan : ";
	cin >> input;
	
	
	for(int i = 0; i < input; i++){
		cout << "masukkan nilai berdasarkan index : ";
		cin >> array1[i];
		
		for(int j = 0; i < input; i++){
			array1[j] += array1[j+3];
		}
	}
	
	for(int k = 0; k < input; k++){
		cout << array1[k];
	}
	
//	for(int i = 0; i < input; i++){
//	cout << "masukan nilai berdasarkan index " << i << " ";
//	cin >> array1[i];
//	}
//	for(int j = 0; j < input; j++){
//	cout << "masukan nilai berdasarkan index  " << j;
//	cin >> array2[j];
//	}
//	
//	for(int k = 0; k < input; k++){
//		int jumlah = array1[k] + array2[k];
//		cout << "hasil "<<jumlah << " ";
//	}
	
	
	
	
	
	
	
	
	return 0;
}
