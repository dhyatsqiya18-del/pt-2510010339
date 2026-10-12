#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const double BOBOT_TUGAS = 0.20;
const double BOBOT_UTS   = 0.30;
const double BOBOT_UAS   = 0.30;
const double BOBOT_PRAK  = 0.20;

int main() {
    string nama1, nim1;
    double tugas1, uts1, uas1, prak1;

    string nama2, nim2;
    double tugas2, uts2, uas2, prak2;

    getline(cin >> ws, nama1);
    cin >> nim1 >> tugas1 >> uts1 >> uas1 >> prak1;

    getline(cin >> ws, nama2);
    cin >> nim2 >> tugas2 >> uts2 >> uas2 >> prak2;

    double nilai_akhir1 = (tugas1 * BOBOT_TUGAS) + (uts1 * BOBOT_UTS) + (uas1 * BOBOT_UAS) + (prak1 * BOBOT_PRAK);
    double nilai_akhir2 = (tugas2 * BOBOT_TUGAS) + (uts2 * BOBOT_UTS) + (uas2 * BOBOT_UAS) + (prak2 * BOBOT_PRAK);

    cout << fixed << setprecision(3);
    cout << "Nilai akhir " << nama1 << " (" << nim1 << ") : " << nilai_akhir1 << endl;
    cout << "Nilai akhir " << nama2 << " (" << nim2 << ") : " << nilai_akhir2 << endl;

    return 0;
}
