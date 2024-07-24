#include <iostream>
using namespace std;
int MaxValue(int bilangan[], int angka) {
    int max_value = bilangan[0];
    for (int i = 1; i < angka; i++) {
        if (bilangan[i] > max_value) {
            max_value = bilangan[i];
        }
    } 
    return max_value;
}
int main() {
    int bilangan[5],hasil;
    cout << "Masukkan 5  jarak: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Masukkan jarak ke-" << i + 1 << ": ";
        cin >> bilangan[i];
    }
    int max_value = MaxValue(bilangan,5);
    cout << "jarak terjauh  adalah: " << max_value << endl;

    return 0;
}