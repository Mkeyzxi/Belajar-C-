#include <iostream>
using namespace std;
long jumlah = 600000;
main(){
//	long jumlah = 500000;
	long  bayar;
    float discon;
    
    cout << "masukkan jumlah pembelian Rp. ";
    
    discon = 0.23 * jumlah;
    
    bayar = jumlah - discon;
    cout << "jumlah pembelian Rp. " << jumlah << endl;
    cout << "jumlah discount Rp. " << discon << endl;
    cout << "--------------------------------------------\n";
    cout << "jumlah pembayaran Rp. " << bayar<<endl;
}
