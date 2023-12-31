// sebuahh program manajemen koleksi barang antik menggunakan linked list untuk menyimpan data barang antik. setiap barang anti memiliki informasi berikut:
// nama barang, tahun pembuatan, dan nilai historis. batas tahun pembuatan barang antik hanya dari tahun 1800 hingga 2022, dan nilai historisnya harus di atas Rp.1.000.000,
// buatlah program c++ yang memungkinkan pengguna melakukan operasi-operasi berikut:
// 1. menambahkan barang antik ke dalam koleksi.
// 2. mengubah informasi barang antik berdasarkan namanya.
// 3. menghapus barang antik dari koleksi berdasarkan namanya.
// 4. menanmpilkan seluruh data barang antik dalam koleksi.
// pastikan program dapat digunakan berulang kali untuk mengelola data barang antik yang berbeda. setelah pengimputan beberapa barang antik berakhir, tampilkan data barang antik
// yang memiliki nilai historis tertinggi dan terendah. silakan lengkapi dengan implementasi fungsi-fungsi sesuai dengan kebutuhan program tersebut.

#include <iostream>
using namespace std;
// tahin pembuatan 1900 = 2022
// nilai historis diatas 1.000.000
struct barangAntik{
    string namaB;
    short tahunP;
    int nilaiH;

    barangAntik *next;

}*head,*tail,*cur,*newNode,*del;

void headLingkedlist(string namaB, short tahunP, int nilaiH){
    head = new barangAntik();
    head->namaB = namaB;
    head->tahunP = tahunP;
    head->nilaiH = nilaiH;
    head->next = tail;
    tail = head;
}
void tailLingkedlist(string namaB, short tahunP, int nilaiH){
    tail = new barangAntik();
    tail->namaB = namaB;
    tail->tahunP = tahunP;
    tail->nilaiH = nilaiH;
    tail->next = NULL;
}
void displayLinked(){
    cur = head;
    while(cur != NULL){
        cout << "nama barang : " << cur->namaB << endl; 
        cout << "tahun pembuatan : " << cur->tahunP << endl;
        cout << "nilai historis : " << cur->nilaiH << endl;
        cur = cur->next;
    }
}

void deleteLinked(){
    del = head;
    head = head->next;
    delete del;
}


int main(){
    string barang;
    short tahun;
    int nilai,lanjut;
    char input;
    
    do{
    cout << "1. menambahkan barang antik : " << endl;
    cout << "2. mengubah informasi barang antik : " << endl;
    cout << "3. menghapus barang antik : " << endl;
    cout << "4. menampilkan seluruh data barang koleksi : " << endl;
    cout << "0. keluar : " << endl;
    cout << "masukan pilihan anda : ";
    cin >> input;

    switch(input){
        
        case '1':
            cout << "masukkan nama barang : ";
            cin >> barang;
            cout << "masukkan barang tahun : ";
            cin >> tahun;
            cout << "masukkan barang nilai : ";
            cin >> nilai;
            headLingkedlist(barang, tahun, nilai);
            break;
        case '2':
            break;
        case '3':
            deleteLinked();
            break;
        case '4':
            displayLinked();
            break;
        case '0':
            cout << "sampai jumpa ;)" << endl;
            break;
        default:
            cout << "input yang anda masukkan salah !! " << endl;
            break;

    }

    
    } while(input != '0');
    return 0;
}