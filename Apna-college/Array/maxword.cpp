#include <iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int currlgt=0;
    int maxlgt=0;
    int st=0,en=0;
    int i=0;
    while(1){
        if(arr[i]== ' '|| arr[i]=='\0'){
            if(currlgt>maxlgt){
                maxlgt=currlgt;
                en=st;
            }
            currlgt=0;
            st=i+1;
        }

        else currlgt++;

        if(arr[i]=='\0'){
            break;
        }
    i++;
    }
    cout<<maxlgt<<endl;
    for(int i=0;i<maxlgt; i++){
        cout<<arr[i+en];
    }
    return 0;
    }
