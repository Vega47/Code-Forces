#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int num=0;
    int size=s.length();
    for(int i=0;i<size;i++){
        num+=s[i]-'0';
    }
    cout<<num<<endl;
}
