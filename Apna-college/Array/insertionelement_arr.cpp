#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of elements you want in array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    int index;
    cout<<"enter the index where you want  to insert the element";
    cin>>index;
     if(index>n){
        cout<<"please enter index less than no. of inputs in array";
    }

    int element;
    cout<<"enter the element you want to insert";
    cin>>element;
   
    for(int i=n-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    
    arr[index]=element;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}