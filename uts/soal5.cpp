#include <iostream>

using namespace std;

int main() {
    float angkaPertama, angkaKedua;

    // Meminta input dari pengguna
    cout << "Masukkan Angka Pertama: ";
    cin >> angkaPertama;

    cout << "Masukkan Angka Kedua: ";
    cin >> angkaKedua;

    // Melakukan operasi aritmatika
    cout << "Penjumlahan: " << angkaPertama + angkaKedua << endl;
    cout << "Pengurangan: " << angkaPertama - angkaKedua << endl;
    cout << "Perkalian: " << angkaPertama * angkaKedua << endl;
    if (angkaKedua != 0) {
        cout << "Pembagian: " << angkaPertama / angkaKedua << endl;
    } else {
        cout << "Pembagian: Tidak bisa membagi dengan nol" << endl;
    }

    return 0;
}