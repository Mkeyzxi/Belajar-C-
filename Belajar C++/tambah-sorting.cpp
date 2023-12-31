#include <iostream>
using namespace std;

int main(){
    float jumlah[6] = {0,1,2,3,4,5};
    float a[6];

    for(int i = 0; i < 6; i++){
        cout << "masukkan angka per " << i+1 << " : ";
        cin >> a[i];
    }

    for(int i = 0; i < 6; i++){
        a[i] += a[6/2];
    }
    for(int k = 0; k < 3; k++){
        cout << a[k] << endl;
    }
    
   
    

    return 0;
}