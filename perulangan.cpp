#include <iostream>
using namespace std;

int main() {
    char ulang;

    do {
        cout << "Program berjalan..." << endl;
        cout << "Mau ulang lagi? (y/n): ";
        cin >> ulang;
    } while (ulang == 'y' || ulang == 'Y');

    cout << "Program selesai." << endl;
    return 0;
}