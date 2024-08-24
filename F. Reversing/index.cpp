#include<iostream>
using namespace std;
int main(){
    int s;
    cin>>s;
    int arr[s];
    int temp;
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    //1 2 3
    for(int i=0;i<s/2;i++){
        temp=arr[i];
        arr[i]=arr[s-1-i];
        arr[s-1-i]=temp;
    }
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }

}