#include <iostream>
using namespace std;

struct BilanganBulat{
    short BilanganB;
    BilanganBulat *next;
}*head,*tail,*del,*cur,*i,*j,*temp;

// void displayUrutan() {
//         if (isEmpty()) {
//             cout << "kosong tidak ada yang dapat diitamoilkan" << endl;
//         } else {
//             for (i = head; i != NULL; i = i->next) {
//                 for (j = head; j->next != NULL; j = j->next) {
//                     if (j->BilanganB > j->BilanganB) {
//                         temp = *j;
//                         *j = *(j->next);
//                         *(j->next) = temp;
//                     }
//                 }
//             }
//             cout << "" << endl;
//             cur = head;
//             while (cur != NULL) {
//                 cout << "" << cur->BilanganB<< endl;
//                 cur = cur->next;
//         }
//     }
// }

void headLingked(short BilanganB){
    head = new BilanganBulat();
    head->BilanganB = BilanganB;
    head->next = tail;
    tail = head;
}

void tailLingked(short BilanganB){
    tail = new BilanganBulat();
    tail->BilanganB = BilanganB;
    tail->next = NULL; 
}

void displayAll(){
    cur = head;
    while(cur != NULL){
        cout << "bilangan berikut : " << cur->BilanganB << endl;
        cur = cur->next;
    }
    if(cur == NULL){
        cout << "bilangan kosong ;)" << endl;
    }
    
}

void deleteLingked(){
    del = head;
    head->next;
    delete del;
}



int main(){
    char pilihan;
    short bilangan;
    for(int i = 0; i < 20; i++){
            ulang:
            cout << "masukkan 20 bilangan bulat : ";
            cin >> bilangan;
            if(bilangan < 0 && bilangan > 50){
                cout << "mohon masukkan di range 0-50 !!" << endl;
                goto ulang;
            }
            headLingked(bilangan);
        }

    do{
    
        cout << "1. memasukkan data" << endl;
        cout << "2. mencari bilangan ganjil " << endl;
        cout << "3. mencari bilangan genap " << endl;
        cout << "4. mencari mean " << endl;
        cout << "5. mencari median " << endl;
        cout << "6. mencari modus " << endl;
        cout << "7. mencari semuanya " << endl;
        cout << "8. mencari berdasarkan ascending " << endl;
        cout << "9. menghapus data terbaru " << endl;
        cout << "0. keluar" << endl;
        cout << "masukkan pilihan anda : ";
        cin >> pilihan;
        switch(pilihan){
            case '1':
                cout << "masukkan bilangan bulat  range (0-50): ";
                cin >> bilangan;
                tailLingked(bilangan);
                break;
            case '2':
                cout << "belum diisi kebabisan waktu : ";
                break;
            case '3':
                cout << "belum diisi kebabisan waktu : ";
                break;
            case '4':
                cout << "belum diisi kebabisan waktu : ";
                break;
            case '5':
                cout << "belum diisi kebabisan waktu : ";
                break;
            case '6':
                cout << "belum diisi kebabisan waktu : ";
                break;
            case '7':
                displayAll();
                break;
            case '8':
                // displayUrutan();
                break;
            case '9':
                deleteLingked();
                break;
            case '0':
                cout << "sampai jumpa 0:";
                break;
        }

    }while(pilihan != '0');


}



