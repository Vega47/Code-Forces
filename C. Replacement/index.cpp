#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    for(int i=0;i<t;i++){
        if(arr[i]>0){
            arr[i]=1;
        }else if(arr[i]<0){
            arr[i]=2;
        }else{
            arr[i]=0;
        }
    }
    for(int i=0;i<t;i++){
        cout<<arr[i]<<" ";
    }
}