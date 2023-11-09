#include <iostream>
using namespace std;

int main() {
    const int max_size = 10; // Maximum size of the array
    int arr[max_size] = {1, 2, 3, 4, 5};
    int length = 5; // Current number of elements in the array

    int key;
    int position;

    cout << "Enter the element to insert: ";
    cin >> key;

    cout << "Enter the position to insert the element (0-based index): ";
    cin >> position;

    if (position >= 0 && position <= length && length < max_size) {
        // Shift the existing elements to the right to make space for the new element
        for (int i = length; i > position; i--) {
            arr[i] = arr[i - 1];
        }
        // Insert the new element at the specified position
        arr[position] = key;
        length++;

        cout << "Array elements after insertion: ";
        for (int i = 0; i < length; i++) {
            cout << arr[i] << " ";
        }

    } else if (length >= max_size) {
        cout << "Array is already at its maximum size and cannot insert more elements." <<endl;
    } else {
        cout << "Invalid position. Position should be between 0 and " << length << "." <<endl;
    }

    return 0;
}