#include<climits>
#include<iostream>
using namespace std;
int main(){
    int maxx=INT_MIN;
    int minn=INT_MAX;
    int arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    for(int i=0;i<3;i++){
        if(arr[i]>maxx)maxx=arr[i];
    }
    for(int i=0;i<3;i++){
        if(arr[i]<minn)minn=arr[i];
    }
    cout<<minn<<" "<<maxx;

}