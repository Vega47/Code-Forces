#include<iostream>
using namespace std;
int DigitsSum(int a,int b){
    return a%10+b%10;
}



int main(){
    int a,b;
    cin>>a>>b;
    cout<<DigitsSum(a,b);



}