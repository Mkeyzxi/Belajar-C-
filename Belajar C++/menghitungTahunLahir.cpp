#include <iostream>
using namespace std;

string namaUser, sambutan;
char penilaianUser;

int tanggal(short tanggalTotal, short tanggal){
    return tanggalTotal -= tanggal;
}

int bulan(short bulanTotal,short bulan){
    return bulanTotal -= bulan;
}

int tahun(short tahunSekarang, short tahun){
    return tahunSekarang -= tahun ;
}
char ulang;
int main() {
	
	do{
    short tahunUser, tanggalUser, bulanUser;
    
    cout << "Masukkan nama \t\t: ";
    getline(cin, namaUser);
    cout <<"Masukan tahun lahir \t: ";
    cin >> tahunUser;
    cout <<"Masukan bulan lahir \t: ";
    cin >> bulanUser;
    cout <<"Masukan tanggal lahir \t: ";
    cin >> tanggalUser;
    
    cout << "\nkamu saat ini berusia " << tahun(2023,tahunUser) << " tahun " << bulan(12,bulanUser) << " bulan " << tanggal(30,tanggalUser) << " hari" << endl;
    
    cout << "\nIngin Mencoba Ulang? tekan y, tidak tekan n : ";
    cin >> ulang;
    cin.ignore();
    }while(ulang == 'y' || ulang =='Y');
    
    cout << "Selamat Tinggal" << endl;
   
    return 0;
    
}
