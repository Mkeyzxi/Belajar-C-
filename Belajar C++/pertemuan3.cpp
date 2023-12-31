#include <iostream>
#include <string.h>
#include <cs.string>
using namespace std;

char nim[100][6];
char nama[100][30];
int na[100];
char NimMin[6], NimMax[39];
int i,j,min,max,jumlah;
float rata2;


int main(){
	i = 0;
	cout << "masukan data mahasiswa : \n";
	cout << "input nomor induk mahasiswa : \n";
	cin >>nim[i];
	
	do{
		cout << "input nama : "; 
		cin >> nama[i];
		cout << "input nilai akhir : ";
		cin >> na[i];
		jumlah += na[i];
		i++;
		cout << "input noomr induk mahasiswa : ";
		cin >> nim[i];
	}
	while(!(strcmp(nim[i],"x")==0));
	
	i--;
	rata2 = jumlah/i;
	min = na[0];
	max = na[0];
	
	strcpy(namamax,nama[0]);
	strcpy(NimMax,nim[0]);
	strcpy(namamin,nama[0]);
	strcpy(nimmin,nim[0]);
	for(j=1;j<=i;i++){
		if(na[j] < min){
			min = na[j];
			strcpy(NimMin,nim[j]);
			strcpy(namamin,nama[j]);
			
		}
		if(na[j]> max){
			max = na[j];
			strcpy(NimMax,nim[j]);
			strcpy(namamax,nama[j]);
		}
	}
	cout << "rata rata nilai akhir = " << rata2 << endl;
	cout << "mahasiswa dengan nilai akhir tertinggi !" << endl;
	cout << "nim : " << NimMix << "dengan nama : " << namamin << " dan nilai akhir : " << min;
	
}
