#include <iostream>
#include <cmath>
#include <limits> // untuk nilai tak terbatas (max,min)
using namespace std;
// fungsi matematika
int Tambah(int a, int b){
	return a + b;
}
int Kurang(int a, int b){
	return a - b;
}
int Kali(int a, int b){
	return a * b;
}
double Bagi(double a,double b){
	return a / b;
}
int Modulus(int a, int b){
	return a % b;
}
double Faktorial(int n) {
    double result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
double PythagorasC(float nilai1, float nilai2){ 
	double hasil = sqrt((nilai1*nilai1) + (nilai2*nilai2));
	return hasil;
}
double PythagorasAB(float nilai1, float nilai2){ 
	double hasil = sqrt((nilai1*nilai1) - (nilai2*nilai2));
	return hasil;
}
double KecepatanPercepatan(double nilai1, double nilai2, double nilai3, double nilai4){
	return ((nilai2-nilai1)/(nilai4-nilai3));
}
double EnergiPotensial(double nilai1, double nilai2, double nilai3){
	return nilai1*nilai2*nilai3;
}
double EnergiKinetik(double nilai1, double nilai2){
	return 0.5*nilai1*nilai2;
}





//	login
int main(){
	string username, password;
	char ulang;
	string hiasan[100][2] = {
		"\t\t =========  Login Terlebih dahulu !  ========= \n\n", "\t\t ",
		"\n\t\t Selamat Anda Berhasil Login", "\t\t Daftar Kalkulator Akademis Berdasarkan Matakuliah\n",
		"\t\t 1. Matematika Dikstrit \n", "\t\t 2. Fisika Terapan \n",
		"\t\t 3. Elektronika Digital \n", "\t\t Masukkan Pilihan Anda : ",
		"\t\t Kalkulator Matematika \n", "\t\t Silahkan Memilih Perhitungan \n",
		"\t\t 1. Aritmatika \n", "\t\t 2. Trigonometri \n",
		"\t\t 3. Faktorial \n", "\t\t 4. Nilai Tertinggi,Rata,Terendah \n",
		"\t\t 5. Bangun Ruang \n", "\t\t 6. Aritmatika \n",
		"\t\t Perhitungan Matematika Dasar \n", "\t\t Masukkan (+,-,*,/,%) untuk memilih : ",
		"\t\t Masukkan Nilai (nilai 1) ((nilai 2) :", "\t\t Hasil Perkalian : ",
		"\t\t Hasil Perjumlahan : ", "\t\t Hasil Pengurangan : ",
		"\t\t Hasil Pembagian : ", "\t\t Hasil Modulus : ",
		"\t\t ups salah", "\t\t ",
		"\t\t ", "\t\t ",
		"\t\t ", "\t\t ",
		"\t\t ", "\t\t ",
		"\t\t ", "\t\t ",
		
	
	};
	
	
	cout << hiasan[0][0];
	cout << "\t\t Masukkan Username : ";
	getline(cin, username);
	
	cout << "\t\t Masukkan Password : ";
	getline(cin, password);
	
	do{
		char pemiliHan3;
		double nilai1, nilai2, nilai3, nilai4, nilai5;
		int pemiliHan2, pemiliHan;
		if(username == "group11" && password == "kitahebat"){	// jika login berhasil
		cout << hiasan[1][0] << endl;
		
		cout << hiasan[1][1];
		cout << hiasan[2][0];
		cout << hiasan[2][1];
		cout << hiasan[3][0];
		
		cout << hiasan[3][1];
		cin >> pemiliHan;
		
			if(pemiliHan == 1){
				cout << hiasan[4][0];
				cout << hiasan[4][1];
				cout << hiasan[5][0];
				cout << hiasan[5][1];
				cout << hiasan[6][0];
				cout << hiasan[6][1];
				cout << hiasan[7][0];
				cout << hiasan[7][1];
				cout << hiasan[3][1];
				cin >> pemiliHan2;
				
				switch (pemiliHan2){
					case 1:
						cout << hiasan[8][0];
						cout << hiasan[8][1];
						cin >> pemiliHan3;
					
						switch (pemiliHan3){
						case '*':
							cout << hiasan[9][0];
							cin >> nilai1 >> nilai2;
							cout << hiasan[9][1] << Kali(nilai1,nilai2);
							break;
						case '+':
							cout << hiasan[9][0];
							cin >> nilai1 >> nilai2;
							cout << hiasan[10][0] << Tambah(nilai1,nilai2);
							break;
						case '-':
							cout << hiasan[9][0];
							cin >> nilai1 >> nilai2;
							cout << hiasan[10][1] << Kurang(nilai1,nilai2);
							break;
						case '/':
							cout << hiasan[9][0];
							cin >> nilai1 >> nilai2;
							cout << hiasan[11][0] << Bagi(nilai1,nilai2);
							break;
						case '%':
							cout << hiasan[9][0];
							cin >> nilai1 >> nilai2;
							cout << hiasan[11][1] << Modulus(nilai1,nilai2);
							break;
						default:
							cout << hiasan[12][0];
							break;
						}
						break;
					case 2:
						cout << "Perhitungan Pythagoras \n";
						cout << "Sisi tegak = a, Sisi mendatar = b, Sisi miring = c \n";
						cout << "Masukkan karakter (a,b,c) untuk memilih : ";
						cin >> pemiliHan3;
						switch (pemiliHan3){
						case 'c':
							cout << "Masukkan Nilai (sisi tegak) (sisi mendatar) : ";
							cin >> nilai1 >> nilai2;
							cout << "Hasil Sisi  adalah : " <<PythagorasC(nilai1,nilai2); 
							break;
						case 'b':
							cout << "Masukkan Nilai (sisi miring) (sisi tegak) : ";
							cin >> nilai1 >> nilai2;
							cout << "Hasil Sisi  adalah : " <<PythagorasAB(nilai1,nilai2);
							break;
						case 'a':
							cout << "Masukkan Nilai (sisi miring) (sisi mendatar) : ";
							cin >> nilai1 >> nilai2;
							cout << "Hasil Sisi  adalah : " <<PythagorasAB(nilai1,nilai2);
							break;
						default:
							cout << "ups salah";
							break;
						}
						break;
					case 3:{
					    	cout << "Perhitungan Faktorial \n";
						cout << " \n";
						cout << "Masukkan mengetahui faktorial : ";
						cin >> nilai1;
						
						double hasil = Faktorial(nilai1);
						cout << "Faktorial dari " << nilai1 << " adalah : " << hasil;
						break;
					}
					break;
					
					case 4:{
						cout << "Mencari Nilai \n";
						cout << " \n";
						
						double total =0.0;
						double nilai;
						double nilaiTertinggi = numeric_limits<double>::min(); 
    					double nilaiTerendah = numeric_limits<double>::max();
    					cout << "Masukkan jumlah angka : ";
						cin >> nilai1;
						
    					for (int i = 1; i <= nilai1; i++) {
				        cout << "Masukkan angka ke-" << i << ": ";
				        cin >> nilai;
				        total += nilai;
				        
				        if (nilai > nilaiTertinggi) {
				            nilaiTertinggi = nilai;
				        }
				        
				        if (nilai < nilaiTerendah) {
				            nilaiTerendah = nilai;
				        }
				    	}
				    
				   		 double rataRata = total / nilai1;
				    
					    cout << "Rata-rata: " << rataRata << endl;
					    cout << "Nilai tertinggi: " << nilaiTertinggi << endl;
					    cout << "Nilai terendah: " << nilaiTerendah << endl;

					}
					case 5:{
						cout << "Bangun Ruang \n";
						cout << "1. Luas dan Keliling persegi \n";
						cout << "2. Luas dan Keliling persegi Panjang\n";
						cout << "3. Luas dan Keliling persegi Segitiga\n";
						cout << "4. Luas dan Keliling persegi Lingkaran\n";
						cout << "Masukkan Pilihan : ";
						cin >> pemiliHan3;
						switch (pemiliHan3){
						case '1':
							cout << "Mencari Luas dan Keliling Persegi \n";
							cout << "Masukkan Nilai (panjang sisi) : ";
							cin >> nilai1;
							nilai2 = nilai1;
							cout << "Hasil luas persegi adalah : " << Kali(nilai1,nilai2) << endl; 
							nilai3 = 4*nilai1;
							cout << "Hasil keliling persegi adalah : " << nilai3 << endl;; 
							break;
						case '2':
							cout << "Mencari Luas dan Keliling Persegi Panjang \n";
							cout << "Masukkan Nilai (panjang sisi) (lebar sisi) : ";
							cin >> nilai1 >> nilai2;
							cout << "Hasil luas persegi panjang adalah : " << Kali(nilai1,nilai2) << endl;
							nilai3 = (2*nilai1)+(2*nilai2);
							cout << "Hasil keliling persegi panjang adalah : " << nilai3 << endl; 
							break;
						case '3':
							cout << "Mencari Luas dan Keliling Segitiga \n";
							cout << "Masukkan Nilai (alas segitiga) (tinggi segitiga) (panjang sisi): ";
							cin >> nilai1 >> nilai2 >> nilai3;
							cout << "Hasil luas persegi panjang adalah : " << 0.5 * Kali(nilai1, nilai2) << endl;
							cout << "Hasil keliling persegi panjang adalah : " << nilai1+2*nilai3 << endl;; 
							break;
						case '4':
							cout << "Mencari Luas dan Keliling Lingkaran \n";
							cout << "Masukkan Nilai (keliling lingkaran) (jari-jari lingkaran) : ";
							cin >> nilai1 >> nilai2;
							cout << "Hasil luas persegi panjang adalah : " << nilai1 * Kali(nilai2,nilai2)<< endl;
							cout << "Hasil keliling persegi panjang adalah : " << 3 * Kali(nilai1,nilai2) << endl; 
							break;
						default:
							cout << "ups salah";
							break;
						}
						break;
						
					}
					break;
					
					case 6:{
						int nilai[10] = {8, 12, 30, 15, 7, 5, 6, 4, 32, 3};
						int i, jumlah = 10;
						float rata;
						for(i=0; i<10; i++){
							jumlah+=nilai[i];
						}
						rata = jumlah/10;
						cout << "Mencetak Deret Bilangan = ";
						for(i = 0; i < 10; i++){
							cout << nilai[i] << " ";
						}
						cout << "\nJumlah Bilangan : " << jumlah << endl;
						cout << "Rata-Rata Nilai : " << rata << endl;
						double hasil = Faktorial(nilai1);
						cout << "Faktorial dari " << nilai1 << " adalah : " << hasil;
						break;
					}
					break;					
				}
							
			}else if (pemiliHan == 2){
				cout << "Kalkulator Fisika Terapan \n";	
				cout << "Silahkan Memilih Perhitungan \n";
				cout << "1. Mekanika \n";
				cout << "2. Kecepatan, jarak, waktu \n";
				cout << "3. Perpindahan \n";
				cout << "4. Energi Potensial \n";
				cout << "Masukkan pilihan : ";
				cin >> pemiliHan2;
				
				switch (pemiliHan2){
					case 1:
						cout << "Perhitungan Mekanika \n";
						cout << "Masukkan (Volume = v,) (Gaya = f) untuk memilih : ";
						cin >> pemiliHan3;
						switch (pemiliHan3){
						case 'v':
							cout << "Masukkan Nilai (nilai s) (nilai t) : ";
							cin >> nilai1 >> nilai2;
							cout << "Hasil V : " << Bagi(nilai1,nilai2) << "m/s \n"; 
							break;
						case 'f':
							cout << "Masukkan Nilai (nilai 1) ((nilai 2) : ";
							cin >> nilai1 >> nilai2;
							cout << "Hasil F : " << Kali(nilai1,nilai2) << "N \n" ;
							break;
						default:
							cout << "ups salah";
							break;
						}
						break;
					case 2:{
						cout << "Silahkan Memilih Perhitungan \n";
						cout << "Kecepatan = v \n";
						cout << "Jarak = s \n";
						cout << "Waktu = t \n";
						cout << "Masukan Pilihan : ";
						cin >> pemiliHan3;
						switch (pemiliHan3){
							case 'v': 
								cout << "Kecepatan \n";
								cout << "Masukkan (jarak) (waktu)";
								cin >> nilai1 >> nilai2;
								cout << "Hasil Kecepatan : " << Bagi(nilai1, nilai2) << " jam";
								break;
							case 's':
								cout << "Jarak \n";
								cout << "Masukkan (kecepatan) (waktu)";
								cin >> nilai1 >> nilai2;
								cout << "Hasil Jarak : " << Kali(nilai1, nilai2) << " km";
								break;
							case 't':
								cout << "Waktu \n";
								cout << "Masukkan (jarak) (kecepatan)";
								cin >> nilai1 >> nilai2;
								cout << "Hasil waktu : " << Bagi(nilai1, nilai2) << " km/jam";
								break;
						}
						break;
					}
					case 3: 
						cout << "Silahkan Memilih Perhitungan \n";
						cout << "1. Kecepatan Rata-Rata \n";
						cout << "2. Percepatan  \n";
						cout << "Masukkan Pilihan : ";
						cin >> pemiliHan3;
						switch (pemiliHan3){
							case '1': 
								cout << "Kecepatan Rata-Rata \n";
								cout << "Masukkan (jarak awal km) (jarak akhir km) (waktu awal jam) (waktu akhir jam) ";
								cin >> nilai1 >> nilai2 >> nilai3 >> nilai4;
								cout << "Hasil Kecepatan : " << KecepatanPercepatan(nilai1, nilai2, nilai3, nilai4) << " km/jam";
								break;
							case '2':
								cout << "Percepatan \n";
								cout << "Masukkan (perubahan kecepatan awal) (perubahan kecepatan) (waktu awal jam) (waktu akhir jam) ";
								cin >> nilai1 >> nilai2 >> nilai3 >> nilai4;
								cout << "Hasil Percepatan : " << KecepatanPercepatan(nilai1, nilai2, nilai3, nilai4) << " km/s^2";
								break;
							
						}
						break;
					case 4:
						cout << "Silahkan Memilih Perhitungan \n";
						cout << "1. Energi Potensial \n";
						cout << "2. Energi Kinetiik  \n";
						cout << "Masukkan Pilihan : ";
						cin >> pemiliHan3;
						switch (pemiliHan3){
							case '1': 
								cout << "Perhitungan Energi Potensial \n";
								cout << "Masukkan Nilai (massa) (percepatan) (ketinggian) = ";
								cin >> nilai1 >> nilai2 >> nilai3;
								cout << "Hasil Energi Potensial : " << EnergiPotensial(nilai1,nilai2,nilai3);
								break;
							case '2':
								cout << "Perhitungan Energi Kinetik \n";
								cout << "Masukkan Nilai (massa) (Kecepatan) = ";
								cin >> nilai1 >> nilai2;
								cout << "Hasil Energi Kinetik : " << EnergiKinetik(nilai1,nilai2);
								break;					
					}
						
//
					
						break;
				}
			}else if (pemiliHan == 3){
				cout << "Kalkulator Elektronika Digital \n";
				cout << "Silahkan Memilih Perhitungan \n";
				cout << "1. Ohm \n";
				cout << "Masukkan pilihan : ";
				cin >> pemiliHan2;
				
				switch (pemiliHan2){
					case 1:
						cout << "Perhitungan Ohm \n";
						cout << "Masukkan (r,v,i) untuk memilih : ";
						cin >> pemiliHan3;
						switch (pemiliHan3){
						case 'r':
							cout << "Masukkan Nilai (nilai v) (nilai i) : ";
							cin >> nilai1 >> nilai2;
							cout << "Hasil Resistensi : " << Bagi(nilai1,nilai2) << "ohm \n"; 
							break;
						case 'v':
							cout << "Masukkan Nilai (nilai r) ((nilai i) : ";
							cin >> nilai1 >> nilai2;
							cout << "Hasil Volt : " << Kali(nilai1,nilai2) << "V \n" ;
							break;
						case 'i':
							cout << "Masukkan Nilai (nilai v) (nilai r) : ";
							cin >> nilai1 >> nilai2;
							cout << "Hasil Ampere : " << Bagi(nilai1,nilai2) << "I \n"; 
							break;
						default:
							cout << "ups salah";
							break;
						}
						break;
					case 2:
						cout << "Termodinamika";
						break;
				}
			}else {
				cout << "anda salah memasukan inputan !!" << endl;
			}
		}else{	//jika login tidak berhasil
		cout << "Login Tidak Berhasil";
		}
	cout << "\n\n";	 
	cout << "Memulai Ulang? (y/n) ";
	cin >> ulang;
		
	}while(ulang == 'y' || ulang == 'Y');
	return 0;

	
}
