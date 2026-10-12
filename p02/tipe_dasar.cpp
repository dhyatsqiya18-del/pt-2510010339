#include <iostream>
#include <string>

using namespace std;

int main() {
    int jumlah_mahasiswa = 32;          
    double nilai_uts = 78.5;            
    char huruf_mutu = 'B';              
    bool lulus = true;                  
    string nama = "Siti Aminah";  

    cout << "Jumlah mahasiswa : " << jumlah_mahasiswa << "\n";
    cout << "Nilai UTS        : " << nilai_uts << "\n";
    cout << "Huruf mutu       : " << huruf_mutu << "\n";
    cout << "Lulus            : " << lulus << "\n";
    cout << "Nama             : " << nama << "\n";

    cout << "\nUkuran di memori (byte): int " << sizeof(int)
              << ", double " << sizeof(double)
              << ", char " << sizeof(char)
              << ", bool " << sizeof(bool) << "\n";
    return 0;
}
