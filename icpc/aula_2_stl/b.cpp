#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, i, j = 0, k = 0, count = 0;
    cin >> n;
    vector<ll> a(n);

    for (i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[i] = x;
    }

    sort(a.begin(), a.end());

    ll position = 0, number = 0;
    while (j < n)
    {
        ll countElement = 1;
        for (k = position; k < n; k++)
        {
            number = a[k];
            if (k + 1 < n)
            {
                if (a[k] == a[k + 1])
                    countElement++;
                else
                    break;
            }
            else
                break;
        }
        if (countElement > number)
            count += countElement - number;
        else if (countElement < number)
            count += countElement;
        position += countElement;
        j = position;
    }

    cout << count;

    return 0;
}