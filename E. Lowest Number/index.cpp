#include<climits>
#include<iostream>
using namespace std;
int main(){
    int index;
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    int minn=INT_MAX;
    for(int i=0;i<t;i++){
        if(arr[i]<minn){
            minn=arr[i];
            index=i;

        }

    }
    cout<<minn<<" "<<index+1;

}