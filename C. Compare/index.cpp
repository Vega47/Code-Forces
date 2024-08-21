#include <iostream>
#include <climits>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s1, s2;
    bool flag = false;
    cin >> s1 >> s2;
    int minn = min(s1.length(), s2.length());
    for (int i = 0; i < minn; i++)
    {
        if (s1[i] > s2[i])
        {

            cout << s2 << endl;
            flag = false;
            break;
        }
        else if (s2[i] > s1[i])
        {
            cout << s1 << endl;
            flag = false;
            break;
        }
        else
        {
            flag = true;
        }
    }
    if (flag == true)
    {
        if (s1.length() < s2.length())
        {
            cout << s1 << endl;
        }
        else
        {
            cout << s2 << endl;
        }
    }
}