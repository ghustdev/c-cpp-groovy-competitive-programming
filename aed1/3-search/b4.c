#include <stdio.h>
#include <stdlib.h>

typedef long long int ll;

int cmp(const void *a, const void *b) {
    ll x = *(const ll*)a;
    ll y = *(const ll*)b;
    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

ll n, p, l, r;

short test(ll d, ll *v) {
    ll count = 0;

    for (int i=0; i<n; i++) {
        count += v[i]/d;
        if (count >= p) return 1;
    }
    printf("\n");

    return 0;
}

int main()
{
    scanf(" %lld %lld", &n, &p);
    ll vect[n];
    ll size = sizeof(vect) / sizeof(vect[0]);

    for (int i=0; i<n; i++) {
        scanf("%lld", &vect[i]);
    }

    qsort(vect, size, sizeof(ll), cmp);
    
    l = 0, r = vect[n-1];
    ll mid;
    while (l < r) {
        mid = (l + r + 1) / 2;

        if (test(mid, vect) == 1)
            l = mid;
        else 
            r = mid - 1;
    }

    test(l, vect);

    printf("%lld", l);


    return 0;




































































































    printf("\nbomboclat676169420\ndalva bebe porra, a dalva adora 2050 cavalos diferentes\n");
}