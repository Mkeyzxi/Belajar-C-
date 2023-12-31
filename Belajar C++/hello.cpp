// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

struct dataMhs {
    string nim,nama;
    float na;
};

dataMhs mhs1, mhs2, mhsMax;

int main() {
    cout << "data mahasiswa 1 \n";
    cout << "masukkan nim : "; getline(cin,mhs1.nim);
    cout << "masukkan nama : "; getline(cin,mhs1.nama);
    cout << "masukkan nilai akhir : "; cin>>mhs1.na;
    
    cout << "data mahasiswa 2 \n";
    cout << "masukkan nim : "; getline(cin,mhs1.nim); 
    cout << "masukkan nama : "; getline(cin,mhs1.nama);
    cout << "masukkan nilai akhir : "; cin>>mhs1.na;
    
    if(mhs1.na > mhs2.na){
        mhsMax = mhs1;
    }else if (mhs2.na > mhs.na){
        mhsMax = mhs2;
    }else if(mhs1.na == mhs2.na){
        cout << "nilai dari 2 mahasiswa sama" << endl;
        goto lanjut;
    }
    
    cout << "\n Mahasiswa nilai tertinggi : \n";
    cout << "Nim L " << mhsMax.nim << " nama : " << mhsMax.nama;
    cout << " nilai akhir : " << mhsMax.na << endl;
    
    lanjut:
    


    return 0;
}
