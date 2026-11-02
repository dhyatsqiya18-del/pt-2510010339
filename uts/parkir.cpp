#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <cctype>
using namespace std;

const int TARIF_MOTOR_PERTAMA = 2000;
const int TARIF_MOTOR_LANJUT  = 1000;
const int MAKS_MOTOR          = 10000;
const int TARIF_MOBIL_PERTAMA = 5000;
const int TARIF_MOBIL_LANJUT  = 3000;
const int MAKS_MOBIL          = 30000;

int main() {
    cout << "=== Parkir Kampus ===\n";

    // ---- bagian starter: baca jumlah kendaraan dengan aman ----
    int n = 0;
    cout << "Jumlah kendaraan:\n";
    while (!(cin >> n) || n < 1) {
        if (cin.eof()) return 1;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Harus bilangan bulat minimal 1. Jumlah kendaraan: ";
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int jmlMotor = 0, jmlMobil = 0, total = 0;

    // TODO 5a: deklarasi pola nilai tertinggi
    int tertinggi = -1;
    string platTertinggi;

    for (int i = 1; i <= n; i++) {
        cout << "--- Kendaraan ke-" << i << " dari " << n << " ---\n";

        // TODO 1: plat nomor (do-while, tidak boleh kosong/spasi, jadi huruf besar)
        string plat;
        bool valid;
        do {
            cout << "Plat nomor : ";
            getline(cin, plat);
            valid = false;
            for (size_t k = 0; k < plat.size(); k++) {
                if (!isspace(static_cast<unsigned char>(plat[k]))) valid = true;
            }
            if (!valid) cout << "Plat tidak boleh kosong.\n";
        } while (!valid);
        for (size_t k = 0; k < plat.size(); k++) {
            plat[k] = static_cast<char>(toupper(static_cast<unsigned char>(plat[k])));
        }

        // TODO 2: jenis (M/R), huruf kecil diterima
        char jenis = ' ';
        string promptJenis = "Jenis (M/R): ";
        while (jenis != 'M' && jenis != 'R') {
            cout << promptJenis;
            string masukan;
            if (!(cin >> masukan)) return 1;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if (masukan.size() == 1)
                jenis = static_cast<char>(toupper(static_cast<unsigned char>(masukan[0])));
            promptJenis = "Hanya M (motor) atau R (roda empat). Jenis (M/R): ";
        }

        // TODO 3: durasi 1..24 dengan cin.fail, clear, ignore
        int durasi = 0;
        string promptDurasi = "Durasi (jam, 1-24): ";
        while (true) {
            cout << promptDurasi;
            bool ok = static_cast<bool>(cin >> durasi);
            if (cin.eof() && !ok) return 1;
            bool dalamRentang = ok && durasi >= 1 && durasi <= 24;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if (dalamRentang) break;
            promptDurasi = "Harus bilangan bulat 1 sampai 24. Durasi (jam): ";
        }

        // TODO 4: hitung biaya, nama jenis, penghitung motor/mobil
        int biaya;
        string namaJenis;
        if (jenis == 'M') {
            namaJenis = "Motor";
            biaya = TARIF_MOTOR_PERTAMA + (durasi - 1) * TARIF_MOTOR_LANJUT;
            if (biaya > MAKS_MOTOR) biaya = MAKS_MOTOR;
            jmlMotor++;
        } else {
            namaJenis = "Mobil";
            biaya = TARIF_MOBIL_PERTAMA + (durasi - 1) * TARIF_MOBIL_LANJUT;
            if (biaya > MAKS_MOBIL) biaya = MAKS_MOBIL;
            jmlMobil++;
        }
        total += biaya;

        cout << "  " << left << setw(12) << plat << setw(8) << namaJenis
             << right << setw(4) << durasi << " jam" << setw(9) << biaya << "\n\n";

        // TODO 5b: pembaruan di dalam perulangan
        if (biaya > tertinggi) {
            tertinggi = biaya;
            platTertinggi = plat;
        }
    }

    // Rekap
    double rata = static_cast<double>(total) / n;
    cout << "=== Rekap Hari Ini ===\n";
    cout << left << setw(16) << "Jumlah kendaraan" << " : " << n << "\n";
    cout << setw(16) << "Motor" << " : " << jmlMotor << "\n";
    cout << setw(16) << "Mobil" << " : " << jmlMobil << "\n";
    cout << setw(16) << "Total pendapatan" << " : " << total << "\n";
    cout << setw(16) << "Rata-rata biaya" << " : " << fixed << setprecision(2) << rata << "\n";
    // TODO 5c: cetak di rekap
    cout << setw(16) << "Tertinggi" << " : " << platTertinggi << " (" << tertinggi << ")\n\n";

    // TODO 6: sebaran jenis dengan perulangan bersarang
    cout << "Sebaran jenis:\n";
    for (int baris = 0; baris < 2; baris++) {
        int jumlah = (baris == 0) ? jmlMotor : jmlMobil;
        cout << (baris == 0 ? "Motor" : "Mobil") << " | ";
        for (int k = 0; k < jumlah; k++) cout << '#';
        cout << ' ' << jumlah << "\n";
    }
    return 0;
}
