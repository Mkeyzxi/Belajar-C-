#include <iostream>
using namespace std;

int main(){
	int arraySize = 12;
	cout <<
	string n[arraySize] = {"mbul","jihan","marwah","adit","reshi","athu","farzi","irham","djarco","pecco","putri"};	 
	string Bil;
	cout<< "masukkan nama mahasiswa kelas E yang ingin dicari : ";

    getline(cin, Bil);
	  for (int i=0; i < arraySize; i++){
	  	if (n[i] == Bil){
	        cout << Bil <<" dia dikelas!!\n";
	        continue;
	    }
	  }
}
