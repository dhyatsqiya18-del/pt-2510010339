# P07 std::string dan Validasi Masukan

Folder kode Pertemuan 7 Pemrograman Terstruktur, pertemuan terakhir sebelum UTS. Program yang punya
keputusan atau perulangan berpasangan dengan flowchart di modul; dua program yang alurnya lurus
(`gabung_banding.cpp`, `getline_campur.cpp`) tidak.

## Isi

| Berkas | Kegunaan |
|---|---|
| `gabung_banding.cpp` | `+`, `==`, `<`, `.length()`, `[posisi]`: dasar-dasar string |
| `huruf_per_huruf.cpp` | for dari 0 sampai `length() - 1`: hitung kata dan vokal, balik, kapital |
| `rapikan_nama.cpp` | Huruf Besar Di Awal Kata dengan bendera `awal_kata`, `toupper`, `tolower` |
| `getline_campur.cpp` | Jebakan Enter yang tersisa setelah `cin >>`; obatnya `cin.ignore(1000, '\n')` disisipkan di praktikum |
| `input_aman.cpp` | Membaca angka dengan aman: `cin.fail()`, `cin.clear()`, `cin.ignore()`; penyembuh perulangan tanpa henti P5 |
| `validasi_nama.cpp` | do-while sampai nama sah: tidak kosong, bukan hanya spasi, tanpa angka |
| `sinilai_v06_awal.cpp` | Starter SiNilai v0.6: v0.5 utuh, lengkapi pembacaan aman dan validasi serta perapian nama |
| `contoh_masukan.txt` | Enam mahasiswa dengan masukan sengaja berantakan: nama kosong, `r2d2`, `abc`, `120` |
| `.vscode/`, `.gitignore` | Sama dengan Pertemuan 6 (termasuk `launch.json` debugger) |

## Kasus uji SiNilai v0.6 (`./sinilai_v06 < contoh_masukan.txt`)

Data mahasiswanya sama dengan Pertemuan 6, tetapi berkasnya berisi jebakan: nama ditulis
`kwon OHYUL` dan `KIM RYUL`, ada baris kosong sebelum nama kim, ada nama `r2d2` sebelum james,
ada `abc` untuk nilai mingguan anh, dan `120` untuk UTS martin. Program yang benar menolak semua jebakan
itu, meminta ulang, merapikan nama, dan menghasilkan laporan yang persis sama dengan v0.5:

| Mahasiswa (sudah dirapikan) | Nilai akhir | Huruf | Status |
|---|---|---|---|
| kwon ohyul | 83.97 | A | Lulus |
| kim ryul | 67.75 | C+ | Lulus |
| james | 49.50 | D | Belum lulus |
| anh keonho | 90.00 | A | Lulus |
| martin edw | 71.00 | B | Lulus |
| sean sabiru | 25.75 | E | Belum lulus |

Laporan kelas: 6 mahasiswa, 4 lulus, 2 belum lulus, rata-rata 64.66, tertinggi anh keonho (90.00),
sebaran A 2, B 1, C 1, D 1, E 1.

Starter (`sinilai_v06_awal.cpp`) berjalan benar untuk masukan yang bersih, tetapi menghasilkan
laporan kacau untuk `contoh_masukan.txt`: itulah yang harus kamu perbaiki.

## Yang dikumpulkan mahasiswa

Folder `p07` di repository `pt-NPM` berisi `sinilai_v06.cpp`. Lihat Modul Pertemuan 7 bagian E.

## Deklarasi AI

Saya menggerjakan sambil diajarin teman, adapun AI yg sesekali saya pakai hanya gemini kalau memang saya bingung total.
