#include <iostream>
#include <string.h>
using namespace std;

//	tambahakan fungsi
//	hitung nilai max
//	hitung nilai min
//	hitung nilai rata rata
//	mencari data berdasarkan nama
//	mencari data berdasaarkan matkul






char nim[100][7];
char nama[100][31];
int na[100];

char NimMin[7], NimMax[7], pilihan;
char namamin[31], namamax[31];
int i, j, nilaiMin, nilaiMax;
float rata2,jumlah;

int nilaiMXF(int a){
	int nilaiMax = na[0]; //masukkan na[]
	cout << "nilai Max : " << nilaiMax;
	return nilaiMax;
}
int nilaiMNF(int a){ // masukkan na[]
	int nilaiMin = na[0];
	cout << "nilai min : " << nilaiMin;
	return nilaiMin;
}
int ratarataF(int a,int b){ // masukkan jumlah dan i nya
	int rata2 = jumlah / i;
	return rata2;
}



int main() {
    i = 0;
    jumlah = 0;

    cout << "Masukkan data mahasiswa : \n";

    do {
        cout << "Input Nomor Induk Mahasiswa: ";
        cin >> nim[i];

        if (strcmp(nim[i], "x") == 0) {
            break;
        }

        cout << "Input Nama: ";
        cin >> nama[i];

        cout << "Input Nilai Akhir: ";
        cin >> na[i];

        jumlah += na[i];
        i++;

    } while (true);
    
    strcpy(namamax, nama[0]);
    strcpy(NimMax, nim[0]);
    strcpy(namamin, nama[0]);
    strcpy(NimMin, nim[0]);
	
	for(int k = 0; k < i; k++){
		if(na[k] < na[k+1]){
			nilaiMin = na[k];
			na[k] = na[k+1];
			na[k+1] = nilaiMin;
		}
		if(na[k] > na[k+1]){
			nilaiMax = na[k];
			nilaiMax = na[k];
			na[k] = na[k+1];
			na[k+1] = nilaiMax;
		}
	}
    
    cout << "silahkan dipilih apa yang ingin kalian cari : " << endl;
    cout << "1. nilai min : " << endl;
    cout << "2. nilai max : " << endl;
    cout << "3. rata-rata : " << endl;
    cout << "masukkan pilihan : ";
    cin >> pilihan;
    switch (pilihan){
    	case '1':
    		nilaiMXF(nilaiMin+1);
    		break;
    	case '2':
    		nilaiMNF(nilaiMax+1);
    		break;
    	case '3':
    		ratarataF(jumlah,na[i]);
    		break;
	}
	return 0;
}
