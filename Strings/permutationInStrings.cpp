#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool check(int a[], int b[])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
            return false;
    }
    return true;
}
int main()
{
    string s1 = "ab", s2 = "eidbaooo";
    if (s1.length() > s2.length())
        return 0;
    int c1[26] = {0}, c2[26] = {0};
    // character count array for
    for (int i = 0; i < s1.length(); i++)
    {
        c1[s1[i] - 97]++;
    }
    // calculating char count array for 1st window
    int i = 0;
    while (i < s1.length())
    {
        c2[s2[i] - 97]++;
        i++;
    }
    // comparing is it matching or not on 1st window
    if (check(c1, c2))
    {
        cout << "true";
        return 1;
    }
    // for whole window
    while (i < s2.length())
    {
        // Adding new Char in window
        c2[s2[i] - 97]++;
        // Decrementing old Char that was in window
        c2[s2[i - s1.length()] - 97]--;
        i++;
        if (check(c1, c2))
        {
            cout << "true";
            return 1;
        }
    }
    return 0;
}