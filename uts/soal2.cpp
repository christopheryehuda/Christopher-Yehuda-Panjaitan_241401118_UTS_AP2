#include <iostream>
using namespace std;

int main() {
    int kode;
    cout << "Masukkan kode 3 digit: ";
    cin >> kode;

    if (kode >= 100 && kode <= 999) {
        int satuan = kode % 10;
        int puluhan = (kode / 10) % 10;
        int ratusan = kode / 100;

        int jumlah = satuan + puluhan + ratusan;
        cout << "Jumlah digit: " << jumlah << endl;
    } else {
        cout << "kode salah! tolong masukkan kode yang benar!" << endl;
    }

    return 0;
}