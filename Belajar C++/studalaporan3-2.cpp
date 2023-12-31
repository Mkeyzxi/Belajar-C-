
    

  
for (j = 1; j < i; j++) {
        if (na[j] < nilaiMin) {
            nilaiMin = na[j];
            strcpy(NimMin, nim[j]);
            strcpy(namamin, nama[j]);
        }

        if (na[j] > nilaiMax) {
            nilaiMax = na[j];
            strcpy(NimMax, nim[j]);
            strcpy(namamax, nama[j]);
        }
    }
    

    cout << "Rata-rata nilai akhir = " << rata2 << endl;
    cout << "Mahasiswa dengan nilai akhir tertinggi : \n";
    cout << "NIM: " << NimMax << " dengan Nama : " << namamax << " dan Nilai Akhir: " << nilaiMax << endl;
    cout << "Mahasiswa dengan nilai akhir terendah : \n";
    cout << "NIM: " << NimMin << " dengan Nama : " << namamin << " dan Nilai Akhir: " << nilaiMin;
