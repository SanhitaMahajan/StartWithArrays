#include <iostream>
using namespace std;

int main() {
    const int max_size = 10; // Maximum size of the array
    int arr[max_size] = {1, 2, 3, 4, 5};
    int length = 5; // Current number of elements in the array

    int key;
    cout << "Enter element to insert at the start of the array: ";
    cin >> key;

    if (length < max_size) {
        // Shift the existing elements to the right to make space for the new element
        for (int i = length; i > 0; i--) {
            arr[i] = arr[i - 1];
        }

        // Insert the new element at the start of the array
        arr[0] = key;
        length++;

        cout << "Array elements after insertion: ";
        for (int i = 0; i < length; i++) {
            cout << arr[i] << " ";
        }
    } else {
        std::cout << "Array is already at its maximum size and cannot insert more elements." << std::endl;
    }

    return 0;
}
