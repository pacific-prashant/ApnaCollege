#include <iostream>
using namespace std;
class A{
    public:
    void abc();

};
void A::abc(){
     int arr[10]={22,52,11,4,3,6,7,8,9,442};
    for(int i=0;i<9;i++){
        for(int j=i+1;j<10;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" " ;
    }
}

int main(){
   
   A obj;
   obj.abc();
    return 0;
}