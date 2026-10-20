#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    int pilihan = 0;
    
    double tugas = 0, uts = 0, uas = 0, nilaiAkhir = 0;
    char indeksNilai = 'E';
    bool sudahDihitung = false; 

    do {
        cout << "\n===============================\n";
        cout << "       MENU UTAMA SiNilai      \n";
        cout << "===============================\n";
        cout << "1. Tampilkan kartu nilai\n";
        cout << "2. Hitung nilai siswa\n";
        cout << "3. Keluar\n";
        cout << "-------------------------------\n";
        cout << "Masukkan pilihan Anda (1-3): ";
        cin >> pilihan;

        if (cin.fail()) {
            cin.clear(); 
            cin.ignore(10000, '\n'); 
            cout << "\n[!] Error: Masukkan angka yang valid!\n";
            continue;
        }

        switch (pilihan) {
            case 1:
                cout << "\n-------------------------------\n";
                cout << "       KARTU NILAI SISWA       \n";
                cout << "-------------------------------\n";
                if (!sudahDihitung) {
                    cout << "[!] Belum ada data nilai. Silakan pilih menu 2 terlebih dahulu.\n";
                } else {
                    cout << fixed << setprecision(2);
                    cout << "Nilai Tugas     : " << tugas << "\n";
                    cout << "Nilai UTS       : " << uts << "\n";
                    cout << "Nilai UAS       : " << uas << "\n";
                    cout << "-------------------------------\n";
                    cout << "Nilai Akhir     : " << nilaiAkhir << "\n";
                    cout << "Indeks Huruf    : " << indeksNilai << "\n";
                }
                cout << "-------------------------------\n";
                break;

            case 2:
                cout << "\n-------------------------------\n";
                cout << "     INPUT & HITUNG NILAI      \n";
                cout << "-------------------------------\n";
                cout << "Masukkan nilai Tugas (0-100): ";
                cin >> tugas;
                cout << "Masukkan nilai UTS   (0-100): ";
                cin >> uts;
                cout << "Masukkan nilai UAS   (0-100): ";
                cin >> uas;

                nilaiAkhir = (tugas * 0.3) + (uts * 0.3) + (uas * 0.4);

                if (nilaiAkhir >= 85) {
                    indeksNilai = 'A';
                } else if (nilaiAkhir >= 70) {
                    indeksNilai = 'B';
                } else if (nilaiAkhir >= 55) {
                    indeksNilai = 'C';
                } else if (nilaiAkhir >= 40) {
                    indeksNilai = 'D';
                } else {
                    indeksNilai = 'E';
                }

                sudahDihitung = true; 
                cout << "\n[✓] Perhitungan nilai berhasil dilakukan!\n";
                break;

            case 3:
                cout << "\nTerima kasih telah menggunakan program SiNilai. Sampai jumpa!\n";
                break;

            default:
                cout << "\n[!] Pilihan tidak dikenal. Silakan pilih angka 1 sampai 3.\n";
        }
    } while (pilihan != 3);

    return 0;
}
