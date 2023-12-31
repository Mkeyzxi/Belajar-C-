#include <iostream>
using namespace std;

int main(){
	int j = 0;
	int array[10] = {1,2,3,4,5,6,7,8,9,10}, input;
	
	cout << "masukkan angka berapa yang anda cari : ";
	cin >> input;
	
	for(int i = 0; i < input; i++){
		if(array[i] == input){
			cout<< input << " angka yang anda cari ada !";
			j++;
		}
	}
	if(j == 0){
		cout << input <<" angka yang anda inputkan tidak ada !";
	}
	return 0;
}
