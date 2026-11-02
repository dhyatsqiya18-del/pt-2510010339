string plat;
bool platValid;
do {
    cout << "Plat nomor : ";
    getline(cin, plat);
    platValid = false;
    for (size_t k = 0; k < plat.size(); k++) {
        if (!isspace(static_cast<unsigned char>(plat[k]))) {
            platValid = true;
        }
    }
    if (!platValid) {
        cout << "Plat tidak boleh kosong.\n";
    }
} while (!platValid);

for (size_t k = 0; k < plat.size(); k++) {
    plat[k] = static_cast<char>(toupper(static_cast<unsigned char>(plat[k])));
}
