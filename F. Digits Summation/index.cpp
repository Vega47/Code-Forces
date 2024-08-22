#include <iostream>
using namespace std;
int DigitsSum(long long a, long long b)
{
    return a % 10 + b % 10;
}

int main()
{
    long long a, b;
    cin >> a >> b;
    cout << DigitsSum(a, b);
}