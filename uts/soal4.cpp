#include <iostream>

using namespace std;

// Fungsi untuk menentukan usia
int hitungUsia(int tahunLahir, int tahunSekarang) {
    return tahunSekarang - tahunLahir;
}

int main() {
    int tahunLahir, tahunSekarang;

    // Meminta input dari pengguna
    cout << "Masukkan tahun lahir: ";
    cin >> tahunLahir;

    cout << "Masukkan tahun sekarang: ";
    cin >> tahunSekarang;

    // Menghitung usia
    int usia = hitungUsia(tahunLahir, tahunSekarang);

    // Menampilkan hasil
    cout << "Berarti Usia Kalian sekarang adalah " << usia << " Tahun" << endl;

    return 0;
}