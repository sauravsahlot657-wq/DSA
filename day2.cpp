#include<iostream>
using namespace std;
int main(){
    int n;
    int pos;
    int arr[100];
    cout<<"how many elements in the array: ";
    cin>>n;
    cout<<"star entering the elements in the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the position form which you want to delete the element: ";
    cin>>pos;
    for(int i= pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    cout<<"the updated array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}