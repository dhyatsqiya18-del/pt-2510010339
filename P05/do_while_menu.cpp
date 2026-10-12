#include <iostream>

using namespace std;

int main() {
    int pilihan = 0;
    do {
        cout << "\n=== Menu SiNilai ===\n";
        cout << "1. Tampilkan kartu nilai\n";
        cout << "2. Hitung ulang\n";
        cout << "3. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Menampilkan kartu nilai...\n";
                break;
            case 2:
                cout << "Menghitung ulang...\n";
                break;
            case 3:
                cout << "Sampai jumpa.\n";
                break;
            default:
                cout << "Pilihan tidak dikenal, coba lagi.\n";
        }
    } while (pilihan != 3);
    return 0;
}
