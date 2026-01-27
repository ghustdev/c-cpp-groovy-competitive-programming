#include <stdio.h>
#include <stdlib.h>

typedef long long int ll;

void quickSort(ll v[], ll low, ll high);
int partition(ll v[], ll low, ll high);
void swap(ll *a, ll *b);


int main ()
{
    ll n; scanf("%lld", &n);
    ll v[n];

    for (ll i=0; i<n; i++) scanf("%lld", &v[i]);

    quickSort(v, 0, n-1);
    
    for (ll i=0; i<n; i++) printf("%lld ", v[i]);

    return 0;
}   

int partition(ll v[], ll low, ll high) {
    ll pivot = v[high];
    ll i = (low - 1);
    
    for(ll j = low; j <= high - 1; j++) {
        if(v[j] < pivot) {
            i++;
            swap(&v[i], &v[j]);
        }
    }
    swap(&v[i + 1], &v[high]);
    return (i + 1);
}

void quickSort(ll v[], ll low, ll high) {
    while (low < high) {
        ll pi = partition(v, low, high);
        if (pi - low < high - pi) {
            quickSort(v, low, pi - 1);
            low = pi + 1;
        } else {
            quickSort(v, pi + 1, high);
            high = pi - 1;
        }
    }
}


void swap(ll *a, ll *b) {
    ll temp = *a;
    *a = *b;
    *b = temp;
}
