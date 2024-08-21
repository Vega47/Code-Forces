#include <climits>
#include <iostream>
using namespace std;
int main()
{
    int maxx = INT_MIN;
    int t;
    cin >> t;
    int n;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        if (n > maxx)
            maxx = n;
    }
    cout << maxx;
}