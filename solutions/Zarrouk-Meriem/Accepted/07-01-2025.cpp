#include <bits/stdc++.h>
using namespace std;

string mask(int n)
{
    string result = "";
    string s = to_string(n);

    if (s.length() > 1)
    {
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == '7' || s[j] == '4')
            {
                result += s[j];
            }
        }
    }
    else
    {
        if (s == "7" || s == "4")
        {
            return s;
        }
    }

    return result;
}

int main()
{
    int a;
    int b;
    cin >> a >> b;
    int i = a + 1;
    while (mask(i) != to_string(b))
    {
        i++;
    }
    cout << i;

    return 0;
}
