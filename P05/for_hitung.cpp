#include <iostream>

using namespace std;

int main() {
    int jumlah = 0;
    cout << "Jumlah mahasiswa: ";
    cin >> jumlah;

    for (int i = 1; i <= jumlah; i++) {
        cout << "Memproses mahasiswa ke-" << i << " dari " << jumlah << "\n";
    }

    cout << "Selesai memproses " << jumlah << " mahasiswa.\n";
    return 0;
}
