#include <iostream>
using namespace std;

int main() {
	int input;
	int array[input][input];
    cout << "masukkan nilai batas : ";
    cin >> input;
    
    for(int i = 0; i < input; i++){
    	for(int j = 0; j < input; j++){
    		cout << "masukkan angka beserta indexnya : ";
    		cin >> array[i][j];
    		
    		array[i][j]+=array[i+1][j+1
			];
		}
	}
	for(int g = 0; g < input; g++){
		for(int c = 0; c < input; c++){
			cout << array[g][c] << ", ";
		}
	}
    return 0;
}
