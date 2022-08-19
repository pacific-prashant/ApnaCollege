#include <iostream>
using namespace std;
void reverse_array(int arr[],int start,int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
        
}
int main(){
    int arr[10]={10,20,33,1,44,5,6,7,8,9};
    reverse_array(arr,0,9);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}