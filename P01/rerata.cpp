#include <iomanip>
#include <iostream>

int main() {
    int tugas = 80;
    int uts = 75;
    int uas = 90;

    int jumlah = 0;
    jumlah = tugas + uts + uas;
    
    double rerata = 0;
    rerata = static_cast<double>(jumlah) / 3;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Jumlah    : " << jumlah << "\n";
    std::cout << "Rata-rata : " << rerata << "\n";
    return 0;
}
