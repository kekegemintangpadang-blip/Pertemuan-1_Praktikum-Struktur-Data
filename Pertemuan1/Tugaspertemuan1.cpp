#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("cls");
    int gemintang[3][3][4];
    int keke = 2;
    for (int lapisan = 0; lapisan < 3; lapisan++) { 
        for (int isi = 0; isi < 3; isi++) {
            for (int kolom = 0; kolom < 4; kolom++) {
                gemintang[lapisan][isi][kolom] = keke;
                keke += 2;
            }
        }
    }
    for (int lapisan = 0; lapisan < 3; lapisan++) {
        cout << "Lapisan Tabel ke-" << lapisan + 1 << endl;
        for (int isi = 0; isi < 3; isi++) {
            for (int kolom = 0; kolom < 4; kolom++) {
                cout << gemintang[lapisan][isi][kolom] << "\t";
            }
            cout << "\n";
        }
        cout << "\n";
    }
}