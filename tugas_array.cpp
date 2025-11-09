#include <iostream>
using namespace std;

int main() {
    const int jumlah_mhs = 3;   
    const int jumlah_mk= 4;    
    const int max_nama = 50;

    
    char mahasiswa[jumlah_mhs][max_nama];  
    int nilai[jumlah_mhs][jumlah_mk];


    cout << "Program input nilai mahasswa per mata kuliah"<< endl;
    cout << "============================================"<< endl;
    cout << "jumlah Mahasiswa : 3"<< endl;
    cout << "Jumlah Mata Kuliah : 4"<< endl;
    cout << "--------------------------------------------"<< endl;
    cout << "-----------------Input Nilai----------------"<< endl;
    cout << "--------------------------------------------"<< endl;

    
    for (int i = 0; i < jumlah_mhs; i++) {
        cout << "Mahasiswa ke-" << (i + 1) << endl;
        cout << "Masukkan nama mahasiswa ke-" << (i + 1) << ": ";
        cin.getline(mahasiswa[i], max_nama);

        for (int j = 0; j < jumlah_mk; j++) {
            cout << "nilai mk ke-" << (j + 1) << ": ";
            cin >> nilai[i][j];
        }
        cin.ignore(); 
        cout << "---------------------------------------------" << endl;
    }

    
    cout << endl << endl;
    cout << "Statistik nilai rata-rata" << endl;
    for (int i = 0; i < jumlah_mhs; i++) {
        double total = 0;
        for (int j = 0; j < jumlah_mk; j++) {
            total += nilai[i][j];
        }
        double rata_rata = total / jumlah_mk;
        cout << (i + 1) << ". " << mahasiswa[i] << " memiliki rata-rata " << rata_rata << endl;
    }

  
    cout << endl << endl;
    cout << "Statistik nilai tertinggi" << endl;
    for (int j = 0; j < jumlah_mk; j++) {
        int max_nilai = nilai[0][j];
        int indeks_tertinggi = 0;

        for (int i = 1; i < jumlah_mhs; i++) {
            if (nilai[i][j] > max_nilai) {
                max_nilai = nilai[i][j];
                indeks_tertinggi = i;
            }
        }

        cout << (j + 1) << ". Mahasiswa pada mata kuliah ke-" << (j + 1)
             << " tertinggi adalah " << mahasiswa[indeks_tertinggi] << endl;
    }

    return 0;
}