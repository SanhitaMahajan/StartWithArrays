/* Program to Insert element at the End of an Array */
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    int key;
    
    cout << "Enter element to insert at the end of the Array: ";
    cin >> key;
    
    arr.push_back(key);
    
    cout << "Array elements after insertion: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}