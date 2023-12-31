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
    int jumlah,temp;
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
        cout << "sorting!!!!!!!!!!";
        for(int j=0; j<jumlah; j++){
            for(int k=0; k<jumlah; k++){
                if(ptrMhs[k].nilai > ptrMhs[k+1].nilai){
                    temp = ptrMhs[k+1].nilai;
                    ptrMhs[k+1].nilai = ptrMhs[k].nilai;
                    ptrMhs[k].nilai = temp;
                }
            }
        }
        for (int i = 0; i < jumlah; i++)
        {
            cout << ptrMhs[i].nilai << " ";
        }
        
        

    
    }

    
    rataRata /= jumlah;
            for(int i = 0; i < jumlah; i++) {
                cout << "daftarMhs "<< i << "!\n";
                cout << "nim : " << ptrMhs[i].nim << endl;
                cout << "nama : " << ptrMhs[i].nama << endl;
                cout << "alamat :\n";
                cout << "\tJalan: " << ptrMhs[i].alamat->jalan << endl;
                cout << "\tKelurahan: " << ptrMhs[i].alamat->kelurahan << endl;
                cout << "\tKecamatan: " << ptrMhs[i].alamat->kecamatan << endl;
                cout << "nilai : " << ptrMhs[i].nilai << endl;
                cout << endl;
                
            }
    for(int c = 0; c < jumlah; c++){
        cout << "nilai max : " << ptrMhs[c].nilai << endl;
        cout << "nilai min : " << ptrMhs[jumlah-1].nilai << endl;
    }
    
    cout << "nilai rata-rata : " << rataRata << endl;
    delete[] ptrMhs;

    return 0;
}