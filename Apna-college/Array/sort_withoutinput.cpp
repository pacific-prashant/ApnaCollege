#include <iostream>
using namespace std;
int main(){
    int arr[10]={22,11,1,3,55,33,6,202};
    for(int i=0;i<9;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]<arr[j]){
                int temp;
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}