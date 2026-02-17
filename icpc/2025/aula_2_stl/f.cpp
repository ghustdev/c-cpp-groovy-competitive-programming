#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n; cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        ll age, rating, sum_rat_news = 0, sum_rat_olds = 0;
        priority_queue<ll> novos;
        priority_queue<ll> olds;

        cin >> age >> rating;
        ll aux;
        ll rating_novo, rating_old;

        if (i == 0) {
            novos.push(age);
            sum_rat_news += rating;
            rating_novo = rating;
            cout << sum_rat_news << "\n";
            continue;
        }

        if ((novos.size()+1) % 2 != 0) {
            if (age < novos.top()) {
                aux = olds.top();
                novos.push(age);
                sum_rat_news += rating;
            }
        } else {
            if (age < novos.top()) {
                aux = olds.top();
                novos.push(age);
                sum_rat_news += rating;
            } else {
                aux = 
                olds.push(age);
                novos.push()
                sum_rat_news += rating;
            }
        }

        sum_rat_olds - sum_rat_news < 0 ? cout << -1*(sum_rat_olds - sum_rat_news) : cout << sum_rat_olds - sum_rat_news;
    }

    return 0;
}