#include <iostream>

using namespace std;

int main() {
    int jumlah = 0;
    cout << "Berapa nilai? ";
    cin >> jumlah;

    double total = 0;
    for (int i = 1; i < jumlah; i++) {
        double nilai = 0;
        cout << "Nilai ke-" << i << ": ";
        cin >> nilai;
        total += nilai;
    }

    cout << "Rata-rata: " << total / jumlah << "\n";
    return 0;
}
