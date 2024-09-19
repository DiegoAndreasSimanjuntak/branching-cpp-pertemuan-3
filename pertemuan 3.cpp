#include <iostream>

using namespace std;

int main() {
    // Nomor 1: Evaluasi nilai score
    {
        int score;
        cout << "Masukkan nilai score: ";
        cin >> score;

        if (score >= 90) {
            cout << "Selamat! Anda mendapatkan nilai A." << endl;
        } else if (score >= 80) {
            cout << "Anda mendapatkan nilai B." << endl;
        } else if (score >= 70) {
            cout << "Anda mendapatkan nilai C." << endl;
        } else if (score >= 60) {
            cout << "Anda mendapatkan nilai D." << endl;
        } else {
            cout << "Anda mendapatkan nilai E." << endl;
        }
    }

    // Nomor 2: Menampilkan angka terbesar di antara tiga angka
    {
        int angka1, angka2, angka3, terbesar;
        cout << "Masukkan angka pertama: ";
        cin >> angka1;
        cout << "Masukkan angka kedua: ";
        cin >> angka2;
        cout << "Masukkan angka ketiga: ";
        cin >> angka3;

        if ((angka1 >= angka2) && (angka1 >= angka3)) {
            terbesar = angka1;
        } else if ((angka2 >= angka1) && (angka2 >= angka3)) {
            terbesar = angka2;
        } else {
            terbesar = angka3;
        }
        cout << "Angka terbesar adalah: " << terbesar << endl;
    }

    // Nomor 3: Menghitung luas menggunakan switch case
    {
        int pilihan;
        cout << "Pilih bentuk (1: Persegi, 2: Persegi Panjang, 3: Segitiga): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                int sisi, luas_persegi;
                cout << "Masukkan panjang sisi: ";
                cin >> sisi;
                luas_persegi = sisi * sisi;
                cout << "Luas persegi adalah: " << luas_persegi << endl;
                break;
            }
            case 2: {
                int panjang, lebar, luas_persegi_panjang;
                cout << "Masukkan panjang: ";
                cin >> panjang;
                cout << "Masukkan lebar: ";
                cin >> lebar;
                luas_persegi_panjang = panjang * lebar;
                cout << "Luas persegi panjang adalah: " << luas_persegi_panjang << endl;
                break;
            }
            case 3: {
                int alas, tinggi, luas_segitiga;
                cout << "Masukkan alas: ";
                cin >> alas;
                cout << "Masukkan tinggi: ";
                cin >> tinggi;
                luas_segitiga = (alas * tinggi) / 2; // Perhitungan dibulatkan
                cout << "Luas segitiga adalah: " << luas_segitiga << endl;
                break;
            }
            default:
                cout << "Pilihan tidak valid." << endl;
                break;
        }
    }

    return 0;
}
