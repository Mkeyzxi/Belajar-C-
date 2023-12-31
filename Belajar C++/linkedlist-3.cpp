#include <iostream>
using namespace std;

struct Buku{
    int jumlahBuku;
    string namaBuku;
    int hargaBuku;

    Buku *next;
};

int main(){
    struct Buku *buku1,*buku2,*buku3;
    buku1 = new Buku;
    buku2 = new Buku;
    buku3 = new Buku;
    buku1->jumlahBuku = 1;
    buku1->namaBuku = "stres is marjon";
    buku1->hargaBuku = 43000;
    buku1->next = buku2;

    
    buku2->jumlahBuku = 2;
    buku2->namaBuku = "stres is empy";
    buku2->hargaBuku = 32000;
    buku2->next = buku3;

    
    buku3->jumlahBuku = 3;
    buku3->namaBuku = "rezki is empy";
    buku3->hargaBuku = 11000;
    buku3->next = NULL;


    Buku *cur;
    cur = buku1;
    while(cur != NULL){
        cout << cur->hargaBuku << endl;
        cout << cur->namaBuku << endl;
        cout << cur->jumlahBuku << endl;
        cout <<endl<< endl;
        cur = cur->next;
    }

    return 0;
}