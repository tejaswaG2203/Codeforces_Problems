#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    char c = str[0];
    str.erase(0, 1);
    if (c > 90)
    {
        c -= 32;
    }
    string ans = c + str;
    cout << ans << endl;
    return 0;
}