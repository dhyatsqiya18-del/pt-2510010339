#include <iostream>
#include <string>

using namespace std;

int main() {
    int umur = 0;
    string nama_pertama;
    string nama_kedua;

    cout << "Umur: ";
    cin >> umur;

    cout << "Nama: ";
    getline(cin, nama_pertama);       

    cout << "Nama (sekali lagi): ";
    getline(cin, nama_kedua);         

    cout << "\nUmur         : " << umur << "\n";
    cout << "Nama pertama : [" << nama_pertama << "] panjang " << nama_pertama.length() << "\n";
    cout << "Nama kedua   : [" << nama_kedua << "] panjang " << nama_kedua.length() << "\n";
    return 0;
}
