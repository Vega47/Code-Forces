#include <iostream>
#include <climits>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;
    long long result = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        result += n;
    }
    cout << abs(result);
}