#include <iostream>
using namespace std;

int main() {
    string nama, nim;
    int algo, alnier, matdis;
    float ratarata;

    cout << "Nama Mahasiswa: ";
    getline(cin, nama);
    cout << "NIM: ";
    getline(cin, nim);

    cout << "Nilai Mata Kuliah\n";
    cout << "Algoritma dan Pemrograman: ";
    cin >> algo;
    cout << "Aljabar Linear: ";
    cin >> alnier;
    cout << "Matematika Diskrit: ";
    cin >> matdis;
    cout << endl;

    cout << "Algoritma dan Pemrograman: ";
    if (algo >= 60)
        cout << " selamat anda lulus." << endl;
    else
        cout << "Tidak Lulus. Silakan Ulangi di Tahun Depan!" << endl;

    cout << "Aljabar Linear: ";
    if (alnier >= 60)
        cout << "selamat anda lulus." << endl;
    else
        cout << "Tidak Lulus. Silakan Ulangi di Tahun Depan!" << endl;

    cout << "Matematika Diskrit: ";
    if (matdis >= 60)
        cout << "selamat anda lulus." << endl;
    else
        cout << "Tidak Lulus. Silakan Ulangi di Tahun Depan!" << endl;

    ratarata = (algo + alnier + matdis) / 3.0;
    cout << "\nNilai Rata-rata Semester ini: " << ratarata << endl;

    return 0;
}