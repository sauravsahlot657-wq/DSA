// Problem: Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.

// Input:
// - First line: integer n
// - Second line: n space-separated integers (the array)
// - Third line: integer pos (1-based position)
// - Fourth line: integer x (element to insert)

// Output:
// - Print the updated array (n+1 integers) in a single line, space-separated

// Example:
// Input:
// 5
// 1 2 4 5 6
// 3
// 3

// Output:
// 1 2 3 4 5 6

// Explanation: Insert 3 at position 3, elements [4,5,6] shift right


#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[100];
    int pos;
    int new_ele;
    cout<<"Number of elements in the array: ";
    cin>>n;
    cout<<"start entering elements in the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"position at which you want to insert new element: ";
    cin>>pos;
    cout<<"new element:";
    cin>>new_ele;
    for (int i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=new_ele;
    n++;
    cout<<"the new array is: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}