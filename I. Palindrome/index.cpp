#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int result =0;
    int num ;
    num =n;
    while(num!=0){
        result =result *10 +num%10;
        num/=10;
    }
    cout<<result<<endl;
    result==n?cout<<"YES":cout<<"NO";
}