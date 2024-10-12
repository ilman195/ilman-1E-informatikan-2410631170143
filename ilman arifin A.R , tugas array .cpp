//ilman arifin al-khawarizmi 1Einformatika 2410631170143

#include <iostream>
using namespace std;

int main() {
    int n;


    cout << "Masukkan jumlah elemen array: ";
    cin >> n;


    int arr[n];


    cout << "Masukkan nilai untuk setiap elemen array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Nilai tertinggi: " << max << endl;


    int search;
    cout << "Masukkan angka yang ingin di cari : ";
    cin >> search;


    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            cout << "Angka " << search << " ada ke-" << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Angka " << search << " tidak ada." << endl;
    }

    return 0;
}
