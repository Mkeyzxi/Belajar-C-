#include <iostream>
#include <climits>
using namespace std;

struct Alamat {
    char jalan[50];
    char kelurahan[30];
    char kecamatan[30];
};

struct dtMhs {
    char nim[15];
    char nama[30];
    Alamat *alamat; 
    int nilai;
};

int main() {
    float rataRata,total;
    int jumlah;
    dtMhs *ptrMhs;
    cout << "masukkan jumlah mahasiswa : "; cin >> jumlah;
    ptrMhs = new dtMhs[jumlah];

    for (int i = 0; i < jumlah; i++) {
        ptrMhs[i].alamat = new Alamat; 
        cout << "masukkan nim mahasiswa : "; cin >> ptrMhs[i].nim;
        cout << "masukkan nama mahasiswa : "; cin >> ptrMhs[i].nama;
        cout << "masukkan jalan mahasiswa : "; cin >> ptrMhs[i].alamat->jalan;
        cout << "masukkan kelurahan mahasiswa : "; cin >> ptrMhs[i].alamat->kelurahan;
        cout << "masukkan kecamatan mahasiswa : "; cin >> ptrMhs[i].alamat->kecamatan;
        cout << "masukkan nilai mahasiswa : "; cin >> ptrMhs[i].nilai;
        cout << endl;
        rataRata += ptrMhs[i].nilai;

    }
    rataRata /= jumlah;
            for(int i = 0; i < jumlah; i++) {
                cout << "daftarMhs "<< i+1 << "!\n";
                cout << "nim : " << ptrMhs[i].nim << endl;
                cout << "nama : " << ptrMhs[i].nama << endl;
                cout << "alamat :\n";
                cout << "\tJalan: " << ptrMhs[i].alamat->jalan << endl;
                cout << "\tKelurahan: " << ptrMhs[i].alamat->kelurahan << endl;
                cout << "\tKecamatan: " << ptrMhs[i].alamat->kecamatan << endl;
                cout << "nilai : " << ptrMhs[i].nilai << endl;
                cout << endl;
            }
    cout << "nilai rata-rata : " << rataRata << endl;
    delete[] ptrMhs;

    return 0;
}