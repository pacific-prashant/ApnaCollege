#include <iostream>
using namespace std;

void insert(int arr[],int n,int index,int element){
    for(int i=n-1;i<=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
}

int main(){
    int n;
    cout<<"Enter no. of elements you want to inser in array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int index;
    cout<<"enter the index where you want to inser the element: ";
    cin>>index;
    int element;
    cout<<"enter the element you want to insert: ";
    cin>>element;
    insert(arr,n,index,element);
    cout<<"The new array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}