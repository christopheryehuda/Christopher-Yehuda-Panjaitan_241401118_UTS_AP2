#include <iostream>
using namespace std;

int main() {
    int kode1, kode2, kode3;

    // Input 3 kode
    cout << "kode ke-1 : ";
    cin >> kode1;
    cout << "kode ke-2 : ";
    cin >> kode2;
    cout << "kode ke-3 : ";
    cin >> kode3;

    int total = kode1 + kode2 + kode3;

    // Cek syarat-syarat sistem
    if (kode1 >= 50 && kode2 >= 50 && kode3 >= 50 && total >= 200) {
        cout << "Aman (berhasil menonaktifkan)" << endl;
    } else {
        cout << "Bahaya (gagal dan memicu alarm)" << endl;
    }

    return 0;
}