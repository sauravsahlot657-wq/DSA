// Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.

// Input:
// - First line: integer n (array size)
// - Second line: n space-separated integers
// - Third line: integer k (key to search)

// Output:
// - Line 1: "Found at index i" OR "Not Found"
// Line 2: "Comparisons = c"

// Example:
// Input:
// 5
// 10 20 30 40 50
// 30

// Output:
// Found at index 2
// Comparisons = 3

// Explanation: Compared with 10, 20, 30 (found at index 2 with 3 comparisons)
#include<iostream>
using namespace std;
int main(){
    int n;
    int compares=0;
    int pos=-1;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the value of the key: ";
    cin>>key;
    for(int i=0;i<n;i++){
        compares++;
        if(arr[i]==key){
            pos=i;
            break;
        }
    }
    if(pos!=-1){
        cout<<"key found at the index "<<pos;
    }
    else{
        cout<<"key is not found in the array.";
    
    }
    return 0;
}