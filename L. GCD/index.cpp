#include <climits>
#include <iostream>
using namespace std;
int main()
{
    int gcd;
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=a&&i<=b;i++){
        if(a%i==0&&a%b==0){
            gcd=i;
        }
    }
    cout<<gcd;
}