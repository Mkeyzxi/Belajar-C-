#include <iostream>
using namespace std;

short stop = 0;
char ulang;

int main(){
	int sortir,input,acak[input];
	do{
		ulang:
		cout << "masukkan berapa angka yang ingin diinputkan (max 20 angka) : ";
		cin >> input; // inputan user menentukan nilai dari index
		
		if(input > 20){
			goto ulang;
		}
		
		cout << endl;
		
		for(int i = 0; i < input; i++){ // pengulangan inputan user berdasarkan index
			cout << "masukkan nilai ke " << i+1 << " : ";
			cin >> acak[i];
		}
		cout << endl << endl;
		
		//mbulSorting	
		for(int j = 0; j < input; j++){
			for(int k = 0; k < input; k++){
				if(acak[k] < acak[k+1]){ // penukaran nilai
					stop++;
					sortir = acak[k+1];
					acak[k+1] = acak[k];
					acak[k] = sortir;
				}
			}if(stop == 0){ // apabila tidak ada lagi yang perlu ditukar maka berhenti
				break;
			}
		
	 	}
	 	cout << "hasil sorting : ";
	 	for(int p = 0; p < input; p++){ // menampilkan hasil sortiran nilai
	 		cout << acak[p+1] << " ";
		}
		
		cout << "\n\nulangi program? (y/n) : ";
		cin >> ulang;
		cout << endl;	
		
	}while(ulang == 'y' || ulang == 'Y');	
	
	cout << "selamat tinggal ;)";	
	return 0;	
}
