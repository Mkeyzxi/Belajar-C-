#include <iostream>
#include <string>
using namespace std;

struct Alamat {
    string namaJalan;
    string asalKota;
    double jarakKeKegiatan;
};

struct Node {
    string idHalaman;
    string namaPeserta;
    Alamat alamatPeserta;
    Node* next;
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    void enqueue(const string& namaPeserta, const Alamat& alamatPeserta) {
        Node* newNode = new Node;
        newNode->idHalaman = generateIdHalaman();
        newNode->namaPeserta = namaPeserta;
        newNode->alamatPeserta = alamatPeserta;
        newNode->next = nullptr;

        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        cout << "Data berhasil ditambahkan ke dalam antrian." << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Antrian kosong. Tidak ada data yang dihapus." << endl;
        } else {
            Node* temp = front;
            front = front->next;
            delete temp;
            cout << "Data berhasil dihapus dari antrian." << endl;
        }
    }

    void displayAll() {
        if (isEmpty()) {
            cout << "Antrian kosong. Tidak ada data yang ditampilkan." << endl;
        } else {
            Node* current = front;
            cout << "Data Peserta berdasarkan urutan antrian:" << endl;
            while (current != nullptr) {
                cout << "ID Halaman: " << current->idHalaman << " - Nama Peserta: " << current->namaPeserta 
				<< " - Jarak ke Kegiatan: " << current->alamatPeserta.jarakKeKegiatan << " km" << endl;
                current = current->next;
            }
        }
    }

    void displayByDistance() {
        if (isEmpty()) {
            cout << "Antrian kosong. Tidak ada data yang ditampilkan." << endl;
        } else {
            for (Node* i = front; i != nullptr; i = i->next) {
                for (Node* j = front; j->next != nullptr; j = j->next) {
                    if (j->alamatPeserta.jarakKeKegiatan > j->next->alamatPeserta.jarakKeKegiatan) {
                        Node temp = *j;
                        *j = *(j->next);
                        *(j->next) = temp;
                    }
                }
            }

            cout << "Data Peserta berdasarkan jarak ke lokasi kegiatan (terdekat ke terbesar):" << endl;
            Node* current = front;
            while (current != nullptr) {
                cout << "ID Halaman: " << current->idHalaman << " - Nama Peserta: " << current->namaPeserta
                    << " - Jarak ke Kegiatan: " << current->alamatPeserta.jarakKeKegiatan << " km" << endl;
                current = current->next;
            }
        }
    }

    void displayMiddle() {
        if (isEmpty()) {
            cout << "Antrian kosong. Tidak ada data yang ditampilkan." << endl;
        } else {
            Node* slow = front;
            Node* fast = front;

            while (fast != nullptr && fast->next != nullptr) {
                fast = fast->next->next;
                slow = slow->next;
            }

            cout << "Data Peserta yang berada pada tengah-tengah antrian:" << endl;
            cout << "ID Halaman: " << slow->idHalaman << " - Nama Peserta: " << slow->namaPeserta << endl;
        }
    }

    void searchById(const string& idHalaman) {
        Node* current = front;
        while (current != nullptr) {
            if (current->idHalaman == idHalaman) {
                cout << "Data ditemukan:" << endl;
                cout << "ID Halaman: " << current->idHalaman << " - Nama Peserta: " << current->namaPeserta << endl;
                return;
            }
            current = current->next;
        }

        cout << "Data dengan ID Halaman " << idHalaman << " tidak ditemukan." << endl;
    }

    bool isEmpty() {
        return front == nullptr;
    }

private:
    string generateIdHalaman() {
        static int counter = 1;
        return "laks_" + to_string(counter++);
    }
};

int main() {
    Queue kegiatanQueue;

    int pilihan;
    do {
        cout << "\nMenu:\n";
        cout << "1. Tambah Peserta\n";
        cout << "2. Hapus Peserta\n";
        cout << "3. Tampilkan Semua Peserta\n";
        cout << "4. Tampilkan Peserta berdasarkan Jarak\n";
        cout << "5. Tampilkan Peserta di Tengah-tengah Antrian\n";
        cout << "6. Cari Peserta berdasarkan ID Halaman\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilihan;

        switch (pilihan) {
        case 1: {
            string namaPeserta;
            Alamat alamatPeserta;

            cin.ignore();
            cout << "Masukkan Nama Peserta: ";
            getline(cin, namaPeserta);
            cout << "Masukkan Alamat Peserta:\n";
            cout << "Nama Jalan: ";
            getline(cin, alamatPeserta.namaJalan);
            cout << "Asal Kota: ";
            getline(cin, alamatPeserta.asalKota);
            cout << "Jarak ke Kegiatan (km): ";
            cin >> alamatPeserta.jarakKeKegiatan;

            kegiatanQueue.enqueue(namaPeserta, alamatPeserta);
            break;
        }
        case 2:
            kegiatanQueue.dequeue();
            break;
        case 3:
            kegiatanQueue.displayAll();
            break;
        case 4:
            kegiatanQueue.displayByDistance();
            break;
        case 5:
            kegiatanQueue.displayMiddle();
            break;
        case 6: {
            string idHalaman;
            cin.ignore();
            cout << "Masukkan ID Halaman yang dicari: ";
            getline(cin, idHalaman);
            kegiatanQueue.searchById(idHalaman);
            break;
        }
        case 0:
            cout << "Keluar dari program.\n";
            break;
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    } while (pilihan != 0);

    return 0;
}