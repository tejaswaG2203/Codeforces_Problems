#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str1, str2;
    cin >> str1;
    cin >> str2;
    int strA = 0, strB = 0;
    bool flag = true;
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] > 90)
        {
            strA += str1[i];
        }
        else
        {
            strA += str1[i] + 32;
        }
        if (str2[i] > 90)
            strB += str2[i];
        else
        {
            strB += str2[i] + 32;
        }

        if (strA > strB)
        {
            cout << 1 << endl;
            flag = false;
            break;
        }
        else if (strB > strA)
        {
            cout << -1 << endl;
            flag = false;
            break;
        }
    }
    if (flag)
    {

        cout << 0 << endl;
    }
}