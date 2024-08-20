#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int x;
    int odd=0,even=0,nga=0,pos=0;
    while(t--){
        cin>>x;
        if(x%2==0){
            even++;
        }
        if(x%2!=0){
            odd++;
        }
        if(x>0){
            pos++;
        }
        if(x<0){
            nga++;
        }
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Postive: "<<pos<<endl;
    cout<<"Negative: "<<nga<<endl;
}