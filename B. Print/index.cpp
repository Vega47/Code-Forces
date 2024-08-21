#include<iostream>
using namespace std;
void print(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i==n){
            cout<<i;
        }else
           cout<<i<<" ";
    }
}
int main(){
    print();
}