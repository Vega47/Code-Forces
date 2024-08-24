#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float  a,b;
    cin>>a>>b;
    float c=a/b;
    cout<<"floor "<<a<<" / "<<b<<" = "<<floor(c)<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(c)<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<round(c)<<endl;
}