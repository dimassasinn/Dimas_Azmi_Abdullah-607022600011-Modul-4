#include <iostream>
using namespace std;
int main() {
    int harga_dasar = 40000;
    char pilihan; string hari;
    int umur;
    cout << "Program menghitung harga tiket bioskop" << endl;
    cout << "silakan pilih jenis pelayanan: " << endl;
    cout << "A. Tiket" << endl;
    cout << "B. Keluar" << endl;
    cout << "Masukkan pilihan (A/B): "; cin >> pilihan;
    switch (pilihan) {
        case 'A':
        cout << "Masukkan hari (Weekend / Weekday): ";
        cin >> hari;
        if (hari != "Weekend" && hari != "weekend" && hari != "Weekday" && hari != "weekday") {
            cout << "Hari tidak valid.";
            return 0;
        }
        cout << "Masukkan umur: ";cin >> umur;
        if (hari == "Weekend" || hari == "weekend") {
                if (umur < 12) {
                    cout << "Total Harga: Rp " << harga_dasar + 10000;
                    } else {
                    cout << "Total Harga: Rp " << harga_dasar + 20000;
                    }
            }
            else if (hari == "Weekday" || hari == "weekday") {
                cout << "Total Harga: Rp " << harga_dasar;
            }
            else {
                cout << "Hari tidak valid.";
            }
        break;
        case 'B':
        cout << "Terima kasih telah menggunakan program ini.";
        break;
        default:
        cout << "Pilihan tidak valid.";
        break;
    }   
}