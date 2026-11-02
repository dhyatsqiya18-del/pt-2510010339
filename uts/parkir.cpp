#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string plat;

    bool plat_valid = false;
    do {
        cout << "Plat nomor : ";
        getline(cin, plat);

        bool hanya_spasi = true;
        for (char c : plat) {
            if (c != ' ') {
                hanya_spasi = false;
                break;
            }
        }

        if (plat.empty() || hanya_spasi) {
            cout << "Plat tidak boleh kosong." << endl;
        } else {
            plat_valid = true;
            for (size_t i = 0; i < plat.length(); ++i) {
                plat[i] = toupper(plat[i]);
            }
        }
    } while (!plat_valid);

    cout << "Plat tersimpan: " << plat << endl;
    return 0;
}
