#include <iostream>
using namespace std;
int main()
{
    char c;
    cin >> c;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << c;
        }
        cout << endl;
    }
}