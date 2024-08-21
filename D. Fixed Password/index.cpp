#include<iostream>
using namespace std;
int main(){
    int n;
    do{
        cin>>n;
        if(n==1999)break;
        cout<<"Wrong\n";
    }while(n!=1999);
    cout<<"Correct\n";
    return 0;
}