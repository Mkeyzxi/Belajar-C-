#include <iostream>
#include <string>
using namespace std;

struct Halaman {
    string idHalaman,namaHalaman;
    int jumlahParagraf,jumlahGambar;
    Halaman *next;
};

class Stack {
private:
    Halaman *top;

public:
    Stack() {
        top = NULL;
    }

    void push(string idHalaman, string namaHalaman, int jumlahParagraf, int jumlahGambar) {
        Halaman* newHalaman = new Halaman;
        newHalaman->idHalaman = idHalaman;
        newHalaman->namaHalaman = namaHalaman;
        newHalaman->jumlahParagraf = jumlahParagraf;
        newHalaman->jumlahGambar = jumlahGambar;
        newHalaman->next = top;
        top = newHalaman;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack kosong. Tidak dapat melakukan operasi pop." << endl;
        } else {
            Halaman* temp = top;
            top = top->next;
            delete temp;
        }
    }

    void displayAll() {
        if (isEmpty()) {
            cout << "Stack kosong. Tidak ada data halaman yang dapat ditampilkan." << endl;
        } else {
            Halaman* current = top;
            while (current != NULL) {
                cout << "id halaman: " << current->idHalaman << endl;
                cout << "nama halaman: " << current->namaHalaman << endl;
                cout << "jumlah paragraf: " << current->jumlahParagraf << endl;
                cout << "jumlah gambar: " << current->jumlahGambar << endl<<endl;;
                current = current->next;
            }
        }
    }

    void searchByOrder(int order) {
        if (isEmpty()) {
            cout << "Stack kosong. Tidak dapat melakukan pencarian." << endl;
        } else {
            Halaman* current = top;
            int count = 1;
            while (current != NULL) {
                if (count == order) {
                    cout << "id halaman: " << current->idHalaman << endl;
                    cout << "nama halaman: " << current->namaHalaman << endl;
                    cout << "jumlah paragraf: " << current->jumlahParagraf << endl;
                    cout << "jumlah gambar: " << current->jumlahGambar << endl;
                    return;
                }
                current = current->next;
                count++;
            }
            cout << "Data tidak ditemukan." << endl;
        }
    }

    void searchById(string idHalaman) {
        if (isEmpty()) {
            cout << "Stack kosong. Tidak dapat melakukan pencarian." << endl;
        } else {
            Halaman* current = top;
            while (current != NULL) {
                if (current->idHalaman == idHalaman) {
                    cout << "id halaman: " << current->idHalaman << endl;
                    cout << "nama halaman: " << current->namaHalaman << endl;
                    cout << "jumlah paragraf: " << current->jumlahParagraf << endl;
                    cout << "jumlah gambar: " << current->jumlahGambar << endl;
                    return;
                }
                current = current->next;
            }
            cout << "Data tidak ditemukan." << endl;
        }
    }

    void displayMaxGambar() {
        if (isEmpty()) {
            cout << "Stack kosong. Tidak ada data halaman yang dapat ditampilkan." << endl;
        } else {
            Halaman* current = top;
            Halaman* maxGambar = top;
            while (current != NULL) {
                if (current->jumlahGambar > maxGambar->jumlahGambar) {
                    maxGambar = current;
                }
                current = current->next;
            }
            cout << "Halaman dengan Gambar Terbanyak" << endl;
            cout << "id halaman: " << maxGambar->idHalaman << endl;
            cout << "nama alaman: " << maxGambar->namaHalaman << endl;
            cout << "jumlah paragraf: " << maxGambar->jumlahParagraf << endl;
            cout << "jumlah gambar: " << maxGambar->jumlahGambar << endl;
        }
    }

    bool isEmpty() {
        return top == NULL;
    }
};

int main() {
    Stack stack;

    stack.push("mbul_1", "Halaman 1", 4, 3);
    stack.push("mbul_2", "Halaman 2", 1, 2);
    stack.push("mbul_3", "Halaman 3", 5, 1);
    stack.push("mbul_4", "Halaman 4", 3, 5);

    cout << "Semua Data Halaman:" << endl;
    stack.displayAll();
    
    cout << "Pencarian berdasarkan urutan pada stack:" << endl;
    int order;
    cout << "Masukkan urutan pada stack: ";
    cin >> order;
    stack.searchByOrder(order);

    cout << "\nPencarian berdasarkan id halaman:" << endl;
    string idHalaman;
    cout << "Masukkan id halaman: ";
    cin >> idHalaman;
    stack.searchById(idHalaman);

    cout << "\nGambar terbanyak:" << endl;
    stack.displayMaxGambar();

    cout << "\nSetelah operasi pop:" << endl;
    stack.pop();
    stack.displayAll();
return 0;
}