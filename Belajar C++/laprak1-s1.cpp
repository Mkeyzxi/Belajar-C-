#include <iostream>
using namespace std;



int main(){
    string namaPeserta, namaMax, namaMin;
	char bhsProgram;
	int noRegist;
	short nilaiUjian, siswaTotal, max,min;
	
	cout << "masukan jumlah siswa : ";
	cin >> siswaTotal;
	
	for(int i = 0; i < siswaTotal; i++){
		cout << "no registrasi : ";
		cin >> noRegist;
		cin.ignore();
		
		cout << "nama peserta : ";
		getline(cin, namaPeserta);
		
		cout << "bahasa pemograman (b/c/p) : ";
		cin >> bhsProgram;
		
		cout << "nilai ujian (0-100) : ";
		cin >> nilaiUjian;
		
		if(i == 0){
			max = nilaiUjian;
			min = nilaiUjian;
		}else {
			if(nilaiUjian > max){
				
				max = nilaiUjian;
				namaMax = namaPeserta;
			}else if(nilaiUjian < min){
				min = nilaiUjian;
				namaMin = namaPeserta;
			}
		}
	};
	
	cout << "nama nilai tertinggi : " << namaPeserta;
	cout << "nilai tertinggi : " << max;
	
//	switch(bhsProgram){
//	    case 'b':
//	        if(nilaiUjian > max){
//	        	max = nilaiUjian;
//	            cout << "nilai ujian paling tinggi dikelas b";
//	            cout << "nama peserta : " << namaPeserta;
//	            
//	        }
//	        break;
//	    case 'c':
//	        break;
//	    case 'p':
//	        break;
//	    
//	}
	
	
}
