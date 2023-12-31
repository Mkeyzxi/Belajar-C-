#include <iostream>
using namespace std;

char ulang;

int main (){
  do{
	int arraySize = 12;
	string n[arraySize] = {"mbul","jihan","marwah","adit","reshi","athu","farzi","irham","djarco","pecco","putri"};	 
	string Bil;
	  
	cout<< "masukkan nama mahasiswa kelas E yang ingin dicari : ";
	cin.ignore();
    getline(cin, Bil);
	  for (int i=0; i < arraySize; i++){
	  	if (n[i] == Bil){
	        cout << Bil <<" dia dikelas!!\n";
	        break;
	    }
	  }
	 
	cout << "masih ingin mencari (y/n) ?";
	cin >> ulang;
   }while(ulang == 'y' || ulang == 'Y');
   return 0;
}

//
//#include <iostream>
//using namespace std;
//main () {
//
//  const short arraySize = 12;
//  short n[]= {070,031,005,017,100,121,054,036,044,006,111,001};	     
//
//  cout<<"urutan absensi kelas D-Ti22 : ";
//  for(int i=0;i<arraySize;i++) {
//    cout<<n[i]<<" ";
//  };
//  return 0;
//}


