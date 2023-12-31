#include <iostream>
using namespace std;

int main(){
	int input;
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	int j = 0;
	cout << "masukkan inputan yang anda cari : ";
	cin >> input;
	
	for(int i = 0; i < input; i++){
		if(array[i] == input){
			cout << "nilai yang masukkan ada";
			j++;
		}
	}
	if(j == 0){
		cout << "tidak ada ";
	}
	
	
	
}
