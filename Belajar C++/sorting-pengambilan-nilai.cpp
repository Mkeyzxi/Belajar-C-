#include <iostream>
using namespace std;

int main(){
    int jumlah,temp;
    cout << "masukkan angka yang ingin di tukar : ";
    cin >> jumlah;
    int a[jumlah];

    for(int i = 0; i < jumlah; i++){
        cout << "masukkan angka per " << i+1 << " : ";
        cin >> a[i];
    }

    for(int i = 0; i < jumlah; i++){
        for(int j = 0; j < jumlah - 1; j++){
            if(a[j] > a[j+1]){
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "min : " << a[0] << endl;
    cout << "max : " << a[jumlah-1] << endl;

    cout << "hasil sorting  : ";
    for (int i = 0; i < jumlah; i++){
        cout << a[i] << " ";
    }
    

    return 0;
}