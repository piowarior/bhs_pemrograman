#include <iostream>
#include <string>

using namespace std;


const double harga_ayam_goreng = 20000.0;
const double harga_ketoprak = 15000.0;
const double harga_nasi_goreng = 18000.0;
const double harga_jus_mangga = 10000.0;
const double harga_coffee = 8000.0;
const double harga_teh_jus = 5000.0;

int main() {
    string pilih;
    menu:
    while (true) {
       
        cout << "Menu:\n";
        cout << "1. Makanan\n";
        cout << "2. Minuman\n";
        cout << "3. Exit\n";
        cout << "Pilih: ";
        cin >> pilih;

        if (pilih == "1") {
            string pilih_Makan;
            cout << "Menu Makanan:\n";
            cout << "1. Ayam Goreng\n";
            cout << "2. Ketoprak\n";
            cout << "3. Nasi Goreng\n";
            cout << "4. Kembali\n";
            cout << "Pilih: ";
            cin >> pilih_Makan;

            if (pilih_Makan == "1") {
                int jumlah;
                cout << "Anda memilih Ayam Goreng\n";
                cout << "Masukkan jumlah pesanan: ";
                cin >> jumlah;
                double total_harga = harga_ayam_goreng * jumlah;
                cout << "Total harga: Rp. " << total_harga << endl;
            } else if (pilih_Makan == "2") {
                int jumlah;
                cout << "Anda memilih Ketoprak\n";
                cout << "Masukkan jumlah pesanan: ";
                cin >> jumlah;
                double total_harga = harga_ketoprak * jumlah;
                cout << "Total harga: Rp. " << total_harga << endl;
            } else if (pilih_Makan == "3") {
                int jumlah;
                cout << "Anda memilih Nasi Goreng\n";
                cout << "Masukkan jumlah pesanan: ";
                cin >> jumlah;
                double total_harga = harga_nasi_goreng * jumlah;
                cout << "Total harga: Rp. " << total_harga << endl;
            } else if (pilih_Makan == "4") {
                continue;
            } else {
                cout << "Pilihan salah!\n";
            }
        } else if (pilih == "2") {
            string pilih_Minum;
            cout << "Menu Minuman:\n";
            cout << "1. Jus Mangga\n";
            cout << "2. Coffee\n";
            cout << "3. Teh Jus\n";
            cout << "4. Kembali\n";
            cout << "Pilih: ";
            cin >> pilih_Minum;

            if (pilih_Minum == "1") {
                int jumlah;
                cout << "Anda memilih Jus Mangga\n";
                cout << "Masukkan jumlah pesanan: ";
                cin >> jumlah;
                double total_harga = harga_jus_mangga * jumlah;
                cout << "Total harga: Rp. " << total_harga << endl;
            } else if (pilih_Minum == "2") {
                int jumlah;
                cout << "Anda memilih Coffee\n";
                cout << "Masukkan jumlah pesanan: ";
                cin >> jumlah;
                double total_harga = harga_coffee * jumlah;
                cout << "Total harga: Rp. " << total_harga << endl;
            } else if (pilih_Minum == "3") {
                int jumlah;
                cout << "Anda memilih Teh Jus\n";
                cout << "Masukkan jumlah pesanan: ";
                cin >> jumlah;
                double total_harga = harga_teh_jus * jumlah;
                cout << "Total harga: Rp. " << total_harga << endl;
            } else if (pilih_Minum == "4") {
                continue;
            } else {
                cout << "Pilihan salah!\n";
            }
        } else if (pilih == "3") {
            cout << "EXIT\n";
            break;
        } else {
            cout << "Pilihan salah!\n";
        }
    }

    cout << "EXIT\n";
    return 0;
}