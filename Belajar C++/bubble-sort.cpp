#include <iostream>
using namespace std;

int main(){
	int k,stop = 0;
	int input,temp;
	
	
	cout << "masukkan angka yang ingin anda inputkan : ";
	cin >> input;
	int array[input];
	for(int i = 0; i < input; i++){
		cout << "masukkan angka " << i+1 << " : ";
		cin >> array[i];
	}
	
	for (int j = 0; j < input; j++) {
	    for (int k = 0; k < input-1; k++) {
	        if (array[k] < array[k+1]) {
	            temp = array[k+1];
	            array[k+1] = array[k];
	            array[k] = temp;
	            stop++;
	        }
	        
	    }if(stop == 0){
	    	break;
		}
		
	}
	
	cout << " hasil pengurutan : ";
	for(k = 0; k < input; k++){
		cout << array[k] << " ";
	}
}
