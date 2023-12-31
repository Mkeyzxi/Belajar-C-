#include <iostream>
using namespace std;

struct barangAntik {
    string namaB;
    short tahunP;
    int nilaiH;

    barangAntik* next;
};

barangAntik* head = nullptr;
barangAntik* tail = nullptr;
barangAntik* newNode = nullptr;

void headLingkedlist(string namaB, short tahunP, int nilaiH) {
    newNode = new barangAntik();
    newNode->namaB = namaB;
    newNode->tahunP = tahunP;
    newNode->nilaiH = nilaiH;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
}

void tailLingkedlist(string namaB, short tahunP, int nilaiH) {
    newNode = new barangAntik();
    newNode->namaB = namaB;
    newNode->tahunP = tahunP;
    newNode->nilaiH = nilaiH;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void displayLinked() {
    barangAntik* cur = head;
    while (cur != nullptr) {
        cout << "nama barang : " << cur->namaB << endl;
        cout << "tahun pembuatan : " << cur->tahunP << endl;
        cout << "nilai historis : " << cur->nilaiH << endl;

        cur = cur->next;
    }
}
void deleteLinked() {
    
}
int main() {
    string barang;
    short tahun;
    int nilai;
    char input;

    do {
        cout << "1. menambahkan barang antik : " << endl;
        cout << "2. mengubah informasi barang antik : " << endl;
        cout << "3. menghapus barang antik : " << endl;
        cout << "4. menampilkan seluruh data barang koleksi : " << endl;
        cout << "0. keluar : " << endl;
        cout << "masukan pilihan anda : ";
        cin >> input;

        switch (input) {
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
                // Tambahkan implementasi untuk mengubah informasi barang antik
                break;
            case '3':
                // Tambahkan implementasi untuk menghapus barang antik
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

    } while (input != '0');

    return 0;
}
