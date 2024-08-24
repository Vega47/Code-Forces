#include<iostream>
using namespace std;
int main(){
    char n;
    cin>>n;
    if(n>='A'&&n<='Z'){
        cout<<char(n+' ');
    }else if(n>='a'&&n<='z'){
        cout<<char(n-' ');
    }
}