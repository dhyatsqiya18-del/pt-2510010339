#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama; 
    string npm;

    double kehadiran, mingguan, uts, uas;
    cout << "=== SiNilai v0.1 ===\n";
    cout << "Nama      : ";

    getline(cin, nama);

    cout << "NPM       : ";
    cin >> npm;
    cout << "kehadiran : ";
    cin >> kehadiran;
    cout << "mingguan  : ";
    cin >> mingguan;
    cout << "uts       : ";
    cin >> uts;
    cout << "uas       : ";
    cin >> uas;
   
    cout << "\n--- Kartu Data Mahasiswa ---\n";
   
    cout << "Nama : " << nama;
    cout << "Npm  : " << npm;
    cout << "Kehadiran : " << kehadiran;
    cout << "Mingguan  : " << mingguan;
    cout << "Uts : " << uts;
    cout << "Uas : " << uas;
    return 0;
}
