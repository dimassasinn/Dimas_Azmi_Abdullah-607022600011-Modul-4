#include <iostream>
using namespace std;

int main() {
    string tujuan;
    float berat;
    cout << "Cek ongkir pengiriman barang" << endl;
    cout << "Masukkan tujuan (Jawa / Luar Jawa): ";
    getline (cin, tujuan);
    cout << "Masukkan berat (kg): "; cin >> berat;
    if (tujuan == "Jawa" || tujuan == "jawa") {
        if (berat > 5) {
            cout << "Ongkir: Rp 50.000";
        } else {
            cout << "Ongkir: Rp 20.000";
        }
    } else if (tujuan == "Luar Jawa" || tujuan == "luar jawa") {
        if (berat > 5) {
            cout << "Ongkir: Rp 100.000";
        } else {
            cout << "Ongkir: Rp 50.000";
        }
    } else {
        cout << "Tujuan tidak dikenal.";
    }
}