#include <iostream>
using namespace std;
int main(){
    int arr[10]={33,22,1,4,5,77,66,54,6,45};
    int x=arr[0];
    for(int i=0;i<10;i++){
        if(x>arr[i]){
            x=arr[i];
        }
    }
    cout<<x<<endl;
    return 0;
}