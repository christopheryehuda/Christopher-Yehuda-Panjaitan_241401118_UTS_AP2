#include <iostream>
using namespace std;

int main() {
    string judulbuku;
    cout << "Masukkan daftar judul buku: ";
    getline(cin, judulbuku);

    int i = 0;
    int jumlah = 0;
    int panjang = judulbuku.length();

    while (i < panjang) {
        while (i < panjang && judulbuku[i] == ' ') {
            i++;
        }
        if (i < panjang && judulbuku[i] != ' ') {
            jumlah++;
            while (i < panjang && judulbuku[i] != ' ') {
                i++;
            }
        }
    }

    cout << "Jumlah judul buku: " << jumlah << endl;
    return 0;
}