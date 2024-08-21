#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    bool flag = false;
    int index;
    for (int i = 0; i < t; i++)
    {
        if (arr[i] == target)
        {
            flag = true;
            index = i;
            break;
        }
    }
    if (flag)
    {
        cout << index << endl;
    }
    else
    {
        cout << -1;
    }
}