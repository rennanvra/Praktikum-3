#include <iostream>
using namespace std;

// Mengurutkan karakter secara descending menggunakan Algoritma Insertion sort
void insertion_sort(char arr[], int length) {
    int i, j;
    char tmp;

    for(i = 1; i < length; i++) {
        j = i;

        while (j > 0 && arr[j - 1] < arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }// end of while lopp
    }// end of for loop
}

void print_array(char a[], int length) {

    for(int i=0; i < length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}