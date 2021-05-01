    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        int n;
        cin >> n;
        string str[n];
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (str[i].length() <= 10)
                cout << str[i] << endl;
            else
            {
                ostringstream str1;
     
                temp = str[i].length() - 2;
     
                str1 << temp;
                string geek = str1.str();
     
                char c;
                string tempstr = str[i], out = "";
                c = tempstr[0];
                out += c + geek;
                c = tempstr[str[i].length() - 1];
                out += c;
                cout << out << endl;
            }
        }
    }