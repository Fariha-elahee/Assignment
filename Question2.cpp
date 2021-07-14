#include <bits/stdc++.h>
using namespace std;

string Duplicates(string s, char ch)
{

    int i = 0;
    char c;
    while (i < s.length()) {
        if (i  < s.length() - 1 && s[i] == s[i + 1]) {
            int j = i;
            while (j  < s.length() - 1 && s[j] == s[j + 1]) {
                j++;
            }
            string Str = Duplicates(s.substr(j + 1, s.length()), c);

            s = s.substr(0, i);
            int k = s.length(), l = 0;

            while (Str.length() > 0 && s.length() > 0
                   && Str[0] == s[s.length() - 1]) {
            while (Str.length() > 0
                       && Str[0] != ch
                       && Str[0] == s[s.length() - 1])
                       {Str= Str.substr(1, Str.length());
                }
                s = s.substr(0, s.length() - 1);
            }
            s = s + Str;
            i = j;
        }
        else {
            i++;
        }
    }
    return s;
}

int main()
{

    string str = "Hello Spartaan";
    cout << Duplicates(str, ' ') << endl;


}


