#include <iostream>
using namespace std;

int arr[20], B[20];

int n;

void input(){
    while (true){
        cout << "Masukkan Panjang elemwnt array: ";
        cin >> n;
        
        if (n<= 20) {
            break;
        }
        else {
            cout << "\nMaksimal panjang array adalah 20";
        }
    }

    cout << "\n==========================";
    cout << "\nInputkan Isi Element Array";
    cout << "\n==========================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Array index ke - " << ": ";
        cin >> arr[i];
    }
}

void mergesort(int low, int high){
    //step 1
    if (low >= high ) {
        return; //step 1.a
    }
}


void output() {
    cout << "\nData Setelah diurutkan (MergeSort): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}