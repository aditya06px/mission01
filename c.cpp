#include <iostream>
using namespace std;
int main()
{

    string s = "pavan Koi7yvgv2111g";
    string rev = " ";
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if (c - 'a' >= 0 && c - 'a' <= 25)
        {
            c = c - 'a' + 'A';
        }
        rev.push_back(c);
    }
    cout << rev;
}