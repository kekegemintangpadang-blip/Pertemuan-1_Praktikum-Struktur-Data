#include <iostream>
using namespace std;

int main(){
    int keke[3][3][4];
    int gemintang = 2;
    for (int nilai = 0; nilai < 3; nilai++){
        for (int padang = 0; padang < 3; padang++){
            for (int lapisan = 0; lapisan < 4; lapisan++){
                keke[nilai][padang][lapisan] = gemintang;
                gemintang += 2;
            }
        }
    }
    for (int nilai = 0; nilai < 3; nilai++){
        cout << "Lapisan tabel ke-" << nilai << endl;
        for (int padang = 0; padang < 3; padang++){
            for (int lapisan = 0; lapisan < 4; lapisan++){
                cout << keke[nilai][padang][lapisan] << "\t";
            }
            cout << endl;
        }
    }
}
