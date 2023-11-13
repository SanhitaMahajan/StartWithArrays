/*
Problem Statement - Given a fixed-length integer array arr, duplicate each occurrence of zero, 
                    shifting the remaining elements to the right.

Note that elements beyond the length of the original array are not written. 
Do the above modifications to the input array in place and do not return anything.

Example 1 - 
Input: arr = [1,0,2,3,0,4,5,0]
Output: [1,0,0,2,3,0,0,4]
Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]

Example 2 - 
Input: arr = [1,2,3]
Output: [1,2,3][1,2,3]
Explanation: After calling your function, the input array is modified to: [1,2,3]

Constraints - 
            1 <= arr.length <= 104
            0 <= arr[i] <= 9       

*/

/* Solution */

#include<iostream>
#include<vector>
using namespace std;

void duplicateZeros(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                for(int j=arr.size()-1;j>=i+1;j--){
                    arr[j] = arr[j-1];
                }
                i = i+1;
            }
        }
}


int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(0);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(0);

    cout<<"Array before :"<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    duplicateZeros(arr);

    cout<<"Array after :"<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


   
    return 0;
}

/*
Practice Problem link - 
https://leetcode.com/problems/duplicate-zeros/
*/