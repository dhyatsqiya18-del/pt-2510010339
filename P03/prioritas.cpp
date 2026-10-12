#include <iostream>

using namespace std;

int main() {
    cout << "2 + 3 * 4     = " << 2 + 3 * 4 << "\n";
    cout << "(2 + 3) * 4   = " << (2 + 3) * 4 << "\n";
    cout << "10 - 4 - 3    = " << 10 - 4 - 3 << "\n";
    cout << "10 - (4 - 3)  = " << 10 - (4 - 3) << "\n";
    cout << "2 * 3 / 4     = " << 2 * 3 / 4 << "\n";
    cout << "2 / 4 * 3     = " << 2 / 4 * 3 << "\n";
    cout << "17 % 5 * 2    = " << 17 % 5 * 2 << "\n";

    int hitung = 10;
    hitung += 5;     
    hitung -= 3;     
    hitung *= 2;     
    hitung++;        
    cout << "hitung        = " << hitung << "\n";
    return 0;
}
