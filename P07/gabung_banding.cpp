#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama_depan = "kwon";
    string nama_belakang = "ohyul";

    string nama_lengkap = nama_depan + " " + nama_belakang;
    cout << "Nama lengkap  : " << nama_lengkap << "\n";
    cout << "Panjang       : " << nama_lengkap.length() << " karakter (termasuk spasi)\n";
    cout << "Huruf pertama : " << nama_lengkap[0] << "\n";
    cout << "Huruf terakhir: " << nama_lengkap[nama_lengkap.length() - 1] << "\n";

    string a = "Kim";
    string b = "Kim";
    cout << "\nPerbandingan (1 berarti true):\n";
    cout << "Kim == Kim   : " << (a == "kim") << "\n";
    cout << "Kim == kim   : " << (a == b) << "   (huruf besar dan kecil berbeda)\n";
    cout << "ohyul < Kim  : " << (nama_belakang < a) << "   (urutan kamus: A sebelum B)\n";
    cout << "Zafer < ane : " << (string("Zafer") < "ane") << "   (semua huruf besar berada sebelum huruf kecil)\n";

    string kosong;
    cout << "\nPanjang string kosong: " << kosong.length() << "\n";
    return 0;
}
