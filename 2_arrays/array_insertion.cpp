#include <iostream>
using namespace std;

int insertAtFirst(int arr[], int size, int capacity, int val) {
    if (size >= capacity) {
        return size; // array is full
    }

    for (int i = size - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }

    arr[0] = val;
    return size + 1;
}

int main() {
    int arr[5] = {10, 20, 30, 40};
    int size = 4;
    int capacity = 5;

    size = insertAtFirst(arr, size, capacity, 5);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

