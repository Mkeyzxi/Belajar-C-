// Kalkulator pada Tiga Matakuliah Pilihan 
#include <iostream>
#include <cmath> // perhitungan akar dengan sqrt (penggunaan pythagoras)
#include <limits> // untuk nilai tak terbatas (max,min)

using std::string;
using std::numeric_limits;
using std::cout;
using std::cin;
using std::endl;

// fungsi 
int Tambah(int a, int b){ // Mtk Mencari nilai tambah
	return a + b;
}
int Kurang(int a, int b){ // Mtk Mencari nilai Kurang
	return a - b;
}
int Kali(int a, int b){ // Mtk Mencari nilai Kali
	return a * b;
}
double Bagi(double a,double b){ // Mtk Mencari nilai bagi
	return a / b;
}
int Modulus(int a, int b){ // Mtk Mencari nilai modulus
	return a % b;
}
double Faktorial(int n) { // Mtk Mencari nilai faktorial
    double result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
double PythagorasC(float nilai1, float nilai2){  // Mtk Pythagoras C
	double hasil = sqrt((nilai1*nilai1) + (nilai2*nilai2));
	return hasil;
}
double PythagorasAB(float nilai1, float nilai2){ // Mtk Pythagoras AB
	double hasil = sqrt((nilai1*nilai1) - (nilai2*nilai2));
	return hasil;
}
double KecepatanPercepatan(double nilai1, double nilai2, double nilai3, double nilai4){ // Fis Kecepatan & Percepatan
	return ((nilai2-nilai1)/(nilai4-nilai3));
}
double EnergiPotensial(double nilai1, double nilai2, double nilai3){ // Fis Energi Potensial
	return nilai1*nilai2*nilai3;
}
double EnergiKinetik(double nilai1, double nilai2){ // Fis Energi Kinetik
	return 0.5*nilai1*nilai2;
}
// akhir fungsi

//	login
int main(){ // Pintu Main
	string username, password;
	char ulang;
	string kataberulang[3][2] = {
	    "\t\t Masukkan Pilihan Anda : ", "\t\t Masukkan Nilai (nilai 1) ((nilai 2) : ",
	    "\t\t ups salah", "\n\t\t Silahkan Memilih Perhitungan \n",
	    "_____________________________", "\t\t______________________________________"
	    
	};
	
// Pemasukan Data Login
	cout << "\t\t =======  Login Terlebih dahulu !  ======= \n\n";
		CobaLagi:
	   			cout << kataberulang[2][0]<<endl;
			   	cout << " masukkan username	:";
                cin >> username;
                cout << endl;
                cout << " masukkan password\t:";
                cin >> password;
                cout << endl;
                cout << kataberulang[2][1]<<endl;
				
	 			if (username == "group11" && password == "kitahebat") // Jika login berhasil
				{
				 cout << "\t\t =========  Login Berhasil  ========= " << endl;
				 		goto lanjut;
				}
				else
			   	{
			     cout<< "\t\t =========  LOGIN GAGAL  ========="<<endl;
						goto CobaLagi;
				}			

		lanjut:
					
	do {
		char pemiliHan3;
		double nilai1, nilai2, nilai3, nilai4, nilai5;
		int pemiliHan2, pemiliHan;

		cout << "\t\t Kalkulator di Tiga Matakuliah Pilihan \n" ;
		cout << "\t\t 1. Matematika \n" ; // Matematika
		cout << "\t\t 2. Fisika Terapan \n"; // Fis
		cout << "\t\t 3. Elektronika Digital \n"; // Tronika
		cout << kataberulang[2][1]<<endl;
		cout << kataberulang[0][0];
		cin >> pemiliHan;
		
			if(pemiliHan == 1){ // 1 Mtk Pemilihan kalkulator
				cout << "\n\t\t Kalkulator Matematika \n";
				cout << kataberulang[1][1];
				cout << "\t\t 1. Matematika Dasar \n";
				cout << "\t\t 2. Trigonometri \n";
				cout << "\t\t 3. Faktorial \n";
				cout << "\t\t 4. Nilai Tertinggi,Rata,Terendah \n";
				cout << "\t\t 5. Bangun Ruang \n";
				cout << "\t\t 6. Aritmatika \n";
				cout << kataberulang[0][0]; 
				cin >> pemiliHan2; // Mtk Inputan pemilihan Kalkulator
				
				switch (pemiliHan2){ // Mtk Masuk di Kalkulator Mtk
					case 1: // Mtk Inputan 1
						cout << "\n\t\t Perhitungan Matematika Dasar \n";
						cout << "\t\t Masukkan (+,-,*,/,%) untuk memilih : ";
						cin >> pemiliHan3;
						switch (pemiliHan3){
						case '*': // Mtk Inputan 1 karakter *
							cout << kataberulang[0][1];
							cin >> nilai1 >> nilai2;
							cout << "Perkalian\n";
							cin >> nilai1 >> nilai2;
							cout << "\t\thasil perkalian : " << Kali(nilai1, nilai2);
							cout << "\t\t" << nilai1 << " x " << nilai2;
							break;
						case '+': // Mtk Inputan 1 karakter +
							cout << kataberulang[0][1];
							cin >> nilai1 >> nilai2;
							cout << "\t\t Hasil Perjumlahan : " << Tambah(nilai1,nilai2);
							break;
						case '-': // Mtk Inputan 1 karakter -
							cout << kataberulang[0][1];
							cin >> nilai1 >> nilai2;
							cout << "\t\t Hasil Pengurangan : " << Kurang(nilai1,nilai2);
							break;
						case '/': // Mtk Inputan 1 karakter /
							cout << kataberulang[0][1];
							cin >> nilai1 >> nilai2;
							cout << "\t\t Hasil Pembagian : " << Bagi(nilai1,nilai2);
							break;
						case '%': // Mtk Inputan 1 karakter %
							cout << kataberulang[0][1];
							cin >> nilai1 >> nilai2;
							cout << "\t\t Hasil Modulus : " << Modulus(nilai1,nilai2);
							break;
						default: // Mtk Inputan 1 karakter salah
							cout << kataberulang[1][0];
							break;
						}
						break;
					case 2: // Mtk Inputan 2
						cout << "\n\t\t Perhitungan Pythagoras \n";
						cout << "\t\t Sisi tegak = a, Sisi mendatar = b, Sisi miring = c \n";
						cout << "\t\t Masukkan karakter (a,b,c) untuk memilih : ";
						cin >> pemiliHan3;
						switch (pemiliHan3){
						case 'c': // Mtk Inputan 2 karakter c
							cout << "\t\t Masukkan Nilai (sisi tegak) (sisi mendatar) : ";
							cin >> nilai1 >> nilai2;
							cout << "\t\t Hasil Sisi  adalah : " <<PythagorasC(nilai1,nilai2); 
							break;
						case 'b': // Mtk Inputan 2 karakter b
							cout << "\t\t Masukkan Nilai (sisi miring) (sisi tegak) : ";
							cin >> nilai1 >> nilai2;
							cout << "\t\t Hasil Sisi  adalah : " <<PythagorasAB(nilai1,nilai2);
							break;
						case 'a': // Mtk Inputan 2 karakter a
							cout << "\t\t Masukkan Nilai (sisi miring) (sisi mendatar) : ";
							cin >> nilai1 >> nilai2;
							cout << "\t\t Hasil Sisi  adalah : " <<PythagorasAB(nilai1,nilai2);
							break;
						default: // Mtk Inputan 2 karakter salah
							cout << kataberulang[1][0];
							break;
						}
						break;
					case 3:{ // Mtk Inputan 3 
					    	cout << "\n\t\t Perhitungan Faktorial \n";
						cout << " \n";
						cout << "\t\t Masukkan mengetahui faktorial : ";
						cin >> nilai1;
						
						double hasil = Faktorial(nilai1);
						cout << "\t\t Faktorial dari " << nilai1 << " adalah : " << hasil;
						break;
					}
					break;
					
					case 4:{ // Mtk Inputan 4
						cout << "\n\t\t Mencari Nilai \n";
						cout << " \n";
						
						double total =0.0;
						double nilai;
						double nilaiTertinggi = numeric_limits<double>::min();
    					double nilaiTerendah = numeric_limits<double>::max();
    					cout << "\t\t Masukkan jumlah angka : ";
						cin >> nilai1;
						
    					for (int i = 1; i <= nilai1; i++) {
				        cout << "\t\t Masukkan angka ke-" << i << ": ";
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
				    
					    cout << "\t\t Rata-rata: " << rataRata << endl;
					    cout << "\t\t Nilai tertinggi: " << nilaiTertinggi << endl;
					    cout << "\t\t Nilai terendah: " << nilaiTerendah << endl;
					
					}
					break;
					case 5:{ // Mtk Inputan 5 
						cout << "\n\t\t Bangun Datar \n";
						cout << "\t\t 1. Luas dan Keliling persegi \n";
						cout << "\t\t 2. Luas dan Keliling persegi Panjang\n";
						cout << "\t\t 3. Luas dan Keliling persegi Segitiga\n";
						cout << "\t\t 4. Luas dan Keliling persegi Lingkaran\n";
						cout << kataberulang[0][0];
						cin >> pemiliHan3;
												
						switch (pemiliHan3){
						case '1': // Mtk Inputan 5 karakter 1
							cout << "\t\t Mencari Luas dan Keliling Persegi \n";
							cout << "\t\t Masukkan Nilai (panjang sisi) : ";
							cin >> nilai1;
							nilai2 = nilai1;
						// luas persegi
							cout << "Luas Persegi \n" << "\t\t\t rumus : \n" << "\t\t\t Luas = sisi x sisi" << endl;
							// pemanggilan nilai inputan
							cout << "\n\t\t Luas =  " << nilai1 << " x " << nilai2 << endl;
							// output hasil nilai inputan
							cout << "\t\t Jadi  Hasil luas persegi adalah : " << Kali(nilai1,nilai2) << endl; 
							
						// keliling persegi
							cout << "Keliling Persegi \n" << "\t\t\t rumus : \n" << "\t\t\t Keliling = 4 x sisi" << endl; 
							cout << "\n\t\t Keliling =  4 " << " x " << nilai1 << endl;
							nilai3 = 4*nilai1;
							cout << "\t\t Jadi  Hasil keliling persegi adalah : " << nilai3 << endl;; 
							break;
							
						case '2': // Mtk 
							cout << "\t\t Mencari Luas dan Keliling Persegi Panjang \n";
							cout << "\t\t Masukkan Nilai sisi panjang : ";
							cin >> nilai1;
							cout << endl;
							cout << "\t\t Masukkan Nilai sisi Lebar : ";
							cin >> nilai2;
							
						// Luas persegi panjang 
						cout << "Luas Persegi Panjang \n" << "\t\t\t rumus : \n" << "\t\t\t Luas = panjang x lebar" << endl;
							// pemanggilan nilai inputan
							cout << "\n\t\t Luas =  " << nilai1 << " x " << nilai2 << endl;			
							// output hasil nilai inputan
							cout << "\t\t Hasil luas persegi panjang adalah : " << Kali(nilai1,nilai2) << endl;
							
						// keliling persegi panjang 
							cout << "Keliling Persegi Panjang \n" << "\t\t\t rumus : \n" << "\t\t\t Keliling = (2 x panjang) + (2 x lebar)" << endl;
							// pemanggilan nilai inputan
							cout << "\n\t\t Keliling =  2 x " << nilai1 << " + 2 x " << nilai2 << endl;
							// perhitungan nilai inputan
							nilai3 = (2*nilai1)+(2*nilai2);
							cout << "\t\t Hasil keliling persegi panjang adalah : " << nilai3 << endl; 
							break;
							
						case '3': // Mtk Inputan 5 karakter 3
							cout << "\t\t Mencari Luas dan Keliling Segitiga \n";
							cout << "\t\t Masukkan Nilai (alas segitiga) (tinggi segitiga) (panjang sisi): ";
							cin >> nilai1 >> nilai2 >> nilai3;
						
						// Luas Segitiga
							cout << "\t\t\t Luas Segitiga\n" ;
							cout << "\t\t\t rumus : \n" << "\t\t\t Luas = 1/2 x alas x tinggi" << endl;
							// pemanggilan nilai inputan
							cout << "\n\t\t Luas =  1/2 x " << nilai1 << " x " << nilai2 << endl;
							// keluaran atau outputan	
							cout << "\t\t\t Hasil luas segitiga adalah : " << 0.5 * Kali(nilai1, nilai2) << endl;
						
						// Keliling Segitiga
							cout << "\t\t\t Keliling Segitiga\n" ;
							cout << "\t\t\t rumus : \n" << "\t\t\t Luas = sisi alas + sisi miring 1 + sisi miring 2" << endl;
							// pemanggilan nilai inputan
							cout << "\n\t\t Keliling = " << nilai1 << " + " << nilai2 << " + " << nilai3 << endl;
							// keluaran atau outputan
							cout << "\t\t Hasil keliling segitiga adalah : " << nilai1+nilai2+nilai3 << endl;
							break;
						case '4': // Mtk Inputan 5 karakter 4
							cout << "\t\t Mencari Luas dan Keliling Lingkaran \n";
							cout << "\t\t Masukkan Nilai (jari-jari lingkaran) : ";
							cin >> nilai1 ;
							
						// Luas Lingkaran
							cout << "\t\t Luas Lingkaran\n" ;
							cout << "\t\t\t rumus : \n" << "\t\t\t Luas = phi x r x r" << endl;
							// pemanggilan nilai inputan
							cout << "\n\t\t Luas =  phi " << nilai1 << " x " << nilai1 << endl;
							cout << "\t\t Hasil luas lingkaran adalah : " << 3.14 * Kali(nilai1,nilai1)<< endl;
							
						// Keliling Lingkaran
							cout << "\t\t\t Keliling Lingkaran\n" ;
							cout << "\t\t\t rumus : \n" << "\t\t\t Luas = 2 x phi x r" << endl;
							// pemanggilan inputan
							cout << "\n\t\t Keliling = 2 x 3,14 " << nilai1 << endl;
							// keluaran atau outputan 
							cout << "\t\t Hasil keliling lingkaran adalah : " << 3 * Kali(nilai1,nilai2) << endl; 
							break;
						default: // Mtk Inputan salah
							cout << kataberulang[1][0];
							break;
						}
						break;
						
					}
					break;
					
					case 6:{ // Mtk Inputan 6 
						int nilai[10] = {8, 12, 30, 15, 7, 5, 6, 4, 32, 3};
						int i, jumlah = 10;
						float rata;
						for(i=0; i<10; i++){
							jumlah+=nilai[i];
						}
						rata = jumlah/10;
						cout << "\n\t\t Mencetak Deret Bilangan = ";
						for(i = 0; i < 10; i++){
							cout << nilai[i] << " ";
						}
						cout << "\n\t\t Jumlah Bilangan : " << jumlah << endl;
						cout << "\t\t Rata-Rata Nilai : " << rata << endl;
						double hasil = Faktorial(nilai1);
						cout << "\t\t Faktorial dari " << nilai1 << "! adalah : " << hasil;
						break;
					}
					break;					
				}
							
			}else if (pemiliHan == 2){ // 2 Fisika Terapan 
				cout << "\t\t Kalkulator Fisika Terapan \n"; // Kalkulator Fisika Terapan
				cout << kataberulang[1][1];
				cout << "\t\t 1. Mekanika \n";
				cout << "\t\t 2. Kecepatan, jarak, waktu \n";
				cout << "\t\t 3. Perpindahan \n";
				cout << "\t\t 4. Energi Potensial \n";
				cout << kataberulang[0][0];
				cin >> pemiliHan2;
				
				switch (pemiliHan2){ 
					case 1: // Fis Inputan 1
						cout << "\n\t\t Perhitungan Mekanika \n";
						cout << "\t\t Masukkan (Volume = v,) (Gaya = f) untuk memilih : ";
						cin >> pemiliHan3;
						switch (pemiliHan3){
						case 'v': // Fis Inputan 1 karakter v
							cout << "\t\t Masukkan Nilai (nilai s) (nilai t) : ";
							cin >> nilai1 >> nilai2;
							cout << "\t\t Hasil V : " << Bagi(nilai1,nilai2) << "m/s \n"; 
							break;
						case 'f': // Fis Inputan 1 karakter f
							cout << "\t\t Masukkan Nilai (nilai 1) ((nilai 2) : ";
							cin >> nilai1 >> nilai2;
							cout << "\t\t Hasil F : " << Kali(nilai1,nilai2) << "N \n" ;
							break;
						default:
							cout << kataberulang[1][0];
							break;
						}
						break;
					case 2:{ // Fis Inputan 2
						cout << kataberulang[1][1];
						cout << "\t\t Kecepatan = v \n";
						cout << "\t\t Jarak = s \n";
						cout << "\t\t Waktu = t \n";
						cout << "\t\t Masukan Pilihan : ";
						cin >> pemiliHan3; // Fis Inputan 2 pemilihan
						switch (pemiliHan3){ 
							case 'v': // Fis Inputan 2 karakter v
								cout << "\t\t Kecepatan \n";
								cout << "\t\t Masukkan (jarak) (waktu)";
								cin >> nilai1 >> nilai2;
								cout << "\t\t Hasil Kecepatan : " << Bagi(nilai1, nilai2) << " jam";
								break;
							case 's': // Fis Inputan 2 karakter s
								cout << "\t\t Jarak \n";
								cout << "\t\t Masukkan (kecepatan) (waktu)";
								cin >> nilai1 >> nilai2;
								cout << "\t\t Hasil Jarak : " << Kali(nilai1, nilai2) << " km";
								break;
							case 't': // Fis Inputan 2 karakter t
								cout << "\t\t Waktu \n";
								cout << "\t\t Masukkan (jarak) (kecepatan)";
								cin >> nilai1 >> nilai2;
								cout << "\t\t Hasil waktu : " << Bagi(nilai1, nilai2) << " km/jam";
								break;
						}
						break;
					}
					case 3: // Fis Inputan 3 
						cout << kataberulang[1][1];
						cout << "\t\t 1. Kecepatan Rata-Rata \n";
						cout << "\t\t 2. Percepatan  \n";
						cout << kataberulang[0][0];
						cin >> pemiliHan3;
						switch (pemiliHan3){
							case '1': // Fis Inputan 3 karakter 1
								cout << "\t\t Kecepatan Rata-Rata \n";
								cout << "\t\t Masukkan (jarak awal km) (jarak akhir km) (waktu awal jam) (waktu akhir jam) ";
								cin >> nilai1 >> nilai2 >> nilai3 >> nilai4;
								cout << "\t\t Hasil Kecepatan : " << KecepatanPercepatan(nilai1, nilai2, nilai3, nilai4) << " km/jam";
								break;
							case '2': // Fis Inputan 3 karakter 2
								cout << "\t\t Percepatan \n";
								cout << "\t\t Masukkan (perubahan kecepatan awal) (perubahan kecepatan) (waktu awal jam) (waktu akhir jam) ";
								cin >> nilai1 >> nilai2 >> nilai3 >> nilai4;
								cout << "\t\t Hasil Percepatan : " << KecepatanPercepatan(nilai1, nilai2, nilai3, nilai4) << " km/s^2";
								break;
							
						}
						break;
					case 4:
						cout << kataberulang[1][1];
						cout << "\t\t 1. Energi Potensial \n";
						cout << "\t\t 2. Energi Kinetiik  \n";
						cout << kataberulang[0][0];
						cin >> pemiliHan3;
						switch (pemiliHan3){
							case '1': 
								cout << "\t\t Perhitungan Energi Potensial \n";
								cout << "\t\t Masukkan Nilai (massa) (percepatan) (ketinggian) = ";
								cin >> nilai1 >> nilai2 >> nilai3;
								cout << "\t\t Hasil Energi Potensial : " << EnergiPotensial(nilai1,nilai2,nilai3);
								break;
							case '2':
								cout << "\t\t Perhitungan Energi Kinetik \n";
								cout << "\t\t Masukkan Nilai (massa) (Kecepatan) = ";
								cin >> nilai1 >> nilai2;
								cout << "\t\t Hasil Energi Kinetik : " << EnergiKinetik(nilai1,nilai2);
								break;					
					}
										
						break;
				}
			}else if (pemiliHan == 3){
				cout << "\n\t\t Kalkulator Elektronika Digital \n";
				cout << kataberulang[1][1];
				cout << "\t\t 1. Ohm \n";
				cout << kataberulang[0][0];
				cin >> pemiliHan2;
				
				switch (pemiliHan2){
					case 1:
						cout << "\n\t\t Perhitungan Ohm \n";
						cout << "\t\t Masukkan (r,v,i) untuk memilih : ";
						cin >> pemiliHan3;
						switch (pemiliHan3){
						case 'r':
							cout << "\t\t Masukkan Nilai (nilai v) (nilai i) : ";
							cin >> nilai1 >> nilai2;
							cout << "\t\t Hasil Resistensi : " << Bagi(nilai1,nilai2) << "ohm \n"; 
							break;
						case 'v':
							cout << "\t\t Masukkan Nilai (nilai r) ((nilai i) : ";
							cin >> nilai1 >> nilai2;
							cout << "\t\t Hasil Volt : " << Kali(nilai1,nilai2) << "V \n" ;
							break;
						case 'i':
							cout << "\t\t Masukkan Nilai (nilai v) (nilai r) : ";
							cin >> nilai1 >> nilai2;
							cout << "\t\t Hasil Ampere : " << Bagi(nilai1,nilai2) << "I \n"; 
							break;
						default:
							cout << kataberulang[1][0];
							break;
						}
						break;
					case 2:
						cout << "\n\t\t Termodinamika";
						break;
				}
			}else {
				cout << "\n\t\t anda salah memasukan inputan !!" << endl;
			}
		
	cout << "\n\n\t\t Memulai Ulang? (y/n) ";
	cin >> ulang;
		
	}while(ulang == 'y' || ulang == 'Y');
	
	return 0;

}
