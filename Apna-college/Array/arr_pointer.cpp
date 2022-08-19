#include <iostream>
using namespace std;

int main(){
    int n; 
    cout<<"enter the no. of elements";
    cin>>n;
    int arr[n];

    int *ptr[n];  

    for(int i=0;i<n;i++){
        arr[i] = i;
        ptr[i] = &arr[i];    //array to array dont use ?*
    }

    for(int i=0;i<n;i++){
        cin >> *ptr[i];
    }

    for(int j=0;j<n;j++){
        cout << *ptr[j]<<endl;
    }

    return 0;
}