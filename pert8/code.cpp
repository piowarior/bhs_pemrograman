#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

// Struktur untuk menyimpan informasi saldo game
struct GameBalance {
    string name;
    unordered_map<int, double> prices; // key: jumlah saldo, value: harga
};

// Data saldo game yang tersedia
unordered_map<string, GameBalance> game_balances = {
    {"Free Fire", {"Free Fire", {{100, 10.0}, {200, 18.0}, {500, 40.0}}}},
    {"Mobile Legends", {"Mobile Legends", {{100, 9.5}, {250, 22.5}, {500, 45.0}}}},
    {"Valorant", {"Valorant", {{50, 5.0}, {100, 9.5}, {200, 18.0}}}},
    {"PUBG", {"PUBG", {{60, 6.0}, {180, 16.5}, {600, 50.0}}}}
};

void displayGames() {
    cout << "Pilih game untuk top up saldo:" << endl;
    cout << "1. Free Fire" << endl;
    cout << "2. Mobile Legends" << endl;
    cout << "3. Valorant" << endl;
    cout << "4. PUBG" << endl;
}

void displayPrices(const GameBalance& game) {
    cout << "Harga saldo untuk " << game.name << ":" << endl;
    for (const auto& price : game.prices) {
        cout << price.first << " saldo - $" << price.second << endl;
    }
}

void displayPaymentMethods() {
    cout << "Pilih metode pembayaran:" << endl;
    cout << "1. E-wallet" << endl;
    cout << "2. Bank" << endl;
    cout << "3. Alfamart" << endl;
}

int main() {
    int choice;
    string gameID;

    displayGames();
    cout << "Masukkan pilihan (1-4): ";
    cin >> choice;

    if (choice < 1 || choice > 4) {
        cout << "Pilihan tidak valid." << endl;
        return 1;
    }

    cout << "Masukkan ID game Anda: ";
    cin >> gameID;

    string selectedGame;
    switch (choice) {
        case 1:
            selectedGame = "Free Fire";
            break;
        case 2:
            selectedGame = "Mobile Legends";
            break;
        case 3:
            selectedGame = "Valorant";
            break;
        case 4:
            selectedGame = "PUBG";
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            return 1;
    }

    displayPrices(game_balances[selectedGame]);

    int saldoChoice;
    cout << "Masukkan jumlah saldo yang ingin dibeli: ";
    cin >> saldoChoice;

    if (game_balances[selectedGame].prices.find(saldoChoice) == game_balances[selectedGame].prices.end()) {
        cout << "Jumlah saldo tidak tersedia." << endl;
        return 1;
    }

    double price = game_balances[selectedGame].prices[saldoChoice];

    displayPaymentMethods();

    int paymentChoice;
    cout << "Masukkan pilihan metode pembayaran (1-3): ";
    cin >> paymentChoice;

    if (paymentChoice < 1 || paymentChoice > 3) {
        cout << "Pilihan tidak valid." << endl;
        return 1;
    }

    string paymentMethod;
    switch (paymentChoice) {
        case 1:
            paymentMethod = "E-wallet";
            break;
        case 2:
            paymentMethod = "Bank";
            break;
        case 3:
            paymentMethod = "Alfamart";
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            return 1;
    }

    char confirm;
    cout << "Anda memilih untuk membeli " << saldoChoice << " saldo di " << selectedGame << " seharga $" << price
         << " menggunakan metode pembayaran " << paymentMethod << ". Yakin ingin melanjutkan? (y/n): ";
    cin >> confirm;

    if (confirm == 'y' || confirm == 'Y') {
        cout << "Pembelian berhasil. Terima kasih!" << endl;
    } else {
        cout << "Pembelian dibatalkan." << endl;
    }

    return 0;
}