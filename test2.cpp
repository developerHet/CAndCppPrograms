#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
ll MOD = 1000000007;

string solve2(string a, string b)
{

    //cin >> a >> b;
    int count_a = 0;
    int count_b = 0;
    int o = a.length();
    int p = b.length();
    for (int i = 0; i < o - 1; i++)
    {
        if (a[i] == 'X')
        {
            count_a++;
        }
    }
    for (int i = 0; i < p - 1; i++)
    {
        if (b[i] == 'X')
        {
            count_b++;
        }
    }
    if (a[o - 1] == b[p - 1] && count_a == count_b)
    {
        return "=";
    }
    else if (a[o - 1] == 'L' && (b[p - 1] == 'S' || b[p - 1] == 'M'))
    {
        return ">";
    }
    else if (b[p - 1] == 'L' && (a[o - 1] == 'S' || a[o - 1] == 'M'))
    {
        return "<";
    }
    else if (a[o - 1] == 'M' && b[p - 1] == 'S')
    {
        return ">";
    }
    else if (b[p - 1] == 'M' && a[o - 1] == 'S')
    {
        return "<";
    }
    else if (a[o - 1] == b[p - 1])
    {
        if (a[o - 1] == 'S' && count_a > count_b)
        {
            return "<";
        }
        else if (a[o - 1] == 'S' && count_a < count_b)
        {
            return ">";
        }
        else if (a[o - 1] == 'L' && count_a > count_b)
        {
            return ">";
        }
        else if (a[o - 1] == 'L' && count_a < count_b)
        {
            return "<";
        }
    }
    return "NO";
}

string solve(string a, string b)
{
    map<char, int> mp;
    mp['S'] = 1;
    mp['M'] = 2;
    mp['L'] = 3;

    int n1 = a.length();
    int n2 = b.length();

    if (mp[a[n1 - 1]] > mp[b[n2 - 1]])
    {
        return ">";
    }
    else if (mp[a[n1 - 1]] < mp[b[n2 - 1]])
    {
        return "<";
    }
    else if (mp[a[n1 - 1]] == mp[b[n2 - 1]])
    {
        if (a[n1 - 1] == 'M')
        {
            return "=";
        }
        else if (a[n1 - 1] == 'S')
        {
            if (n1 < n2)
            {
                return ">";
            }
            else if (n1 > n2)
            {
                return "<";
            }
            else
            {
                return "=";
            }
        }
        else if (a[n1 - 1] == 'L')
        {
            if (n1 < n2)
            {
                return "<";
            }
            else if (n1 > n2)
            {
                return ">";
            }
            else
            {
                return "=";
            }
        }
    }
    return "NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<int, char> mp;

    mp[0] = 'S';
    mp[1] = 'M';
    mp[2] = 'L';
    while (1)
    {

        string a, b;
        int n1 = rand() % 15;
        int n2 = rand() % 15;
        int x = rand() % 3;
        int y = rand() % 3;
        if (x != 1)
        {
            for (int i = 0; i < n1 - 1; i++)
            {
                a += "X";
            }
        }
        if (y != 1)
        {
            for (int i = 0; i < n2 - 1; i++)
            {
                b += "X";
            }
        }

        a += mp[x];
        b += mp[y];
        cout << "a -> " << a << endl;
        cout << "b -> " << b << endl;
        // cout << solve(a,b) << " and " << solve2(a,b) << endl;
        if (solve(a, b) != solve2(a, b))
        {
            cout << a << endl;
            cout << b << endl;
            break;
        }
    }
    return 0;
}