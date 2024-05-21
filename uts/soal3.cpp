#include <iostream>
using namespace std;

int main() {
    int n, i, s, j;// tambahkan variable baru

    cout << "Masukkan jumlah baris: ";
    cin >> n;

    for (i = 1; i <= n; i++) {// melengkapi isi dalam for  untuk loping atas kebawah
        for (s = i; s < n; s++)// melengkapi isi dalam for untuk segita spasi 
            cout << " ";
        for (j = 1; j <= i; j++)// melengkapi isi dalam for untuk segitiga *
            cout << "*";
        cout << "\n";
    }

    return 0;
}