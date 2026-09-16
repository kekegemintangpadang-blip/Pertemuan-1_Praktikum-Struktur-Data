//Dynamic Array 1
#include <iostream>
using namespace std;

int main(){
    system ("cls");
    int var;
    // int arr[5];
    
    // for (int i= 0; i < 5; i++)
    // {
    //  cout << "Masukkan Ukuran Array ke-" << i + 1 << ":";   
    //  cin >> var;
    //  arr[i]= var;
    // }
    // for (int i = 0; i < 7; i++)
    // {
    //     cout << "Elemen ke- "<< i + 1 << ":" << arr[i] << endl;
    // }
    cout << "Masukkan ukuran array :";
    cin >> var;
    int* arr = new int[var]; //ini dynamic array nya
    cout << "Masukkan" << var << "Angka: \n" ;
    for (int i =0; i < var; i++){
        cin >> arr[i];
        }
    cout << "Isi array :";
    for (int i =0; i < var; i++){
    cout << arr[i] << " ";
    
}
delete [] arr;
return 0;
}

