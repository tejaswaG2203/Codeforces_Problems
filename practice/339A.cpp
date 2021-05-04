#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    string temp = "";
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '1')
        {
            a++;
        }
        else if (str[i] == '2')
            b++;
        else if (str[i] == '3')
            c++;
    }

    char ch = '+';

    while (a--)
    {
        temp += "1+";
    }
    while (b--)
    {
        temp += "2+";
    }
    while (c--)
    {
        temp += "3+";
    }
    for (int i = 0; i < temp.length() - 1; i++)
    {
        str[i] = temp[i];
    }
    cout << str;
}
