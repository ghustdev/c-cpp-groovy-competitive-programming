#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base :: sync_with_stdio ( false );
    cin.tie( NULL );

    int n, m, p, i, j, k; cin >> n >> m >> p;
    int l_aux[m+1], c_aux[n+1];
    int mat_dance[n+1][m+1];

    int at = 1;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) 
            mat_dance[i][j] = at++;
    }

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) 
            cout << mat_dance[i][j] << " ";
        cout << "\n";
    }

    for (k = 0; k < p; k++) {
        int a, b;
        char pos;
        cin >> pos >> a >> b;
        if (pos == 'L') {
            for (i = 1; i <= m; i++)
                l_aux[i] = mat_dance[a][i];
            for (i = 1; i <= m; i++) {
                mat_dance[a][i] = mat_dance[b][i]; 
                mat_dance[b][i] = l_aux[i];
            }
        } else {
            for (i = 1; i <= n; i++)
                c_aux[i] = mat_dance[i][a];
            for (i = 1; i <= n; i++) {
                mat_dance[i][a] = mat_dance[i][b]; 
                mat_dance[i][b] = c_aux[i];
            }
        }
        continue;
    }

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) 
            cout << mat_dance[i][j] << " ";
        cout << "\n";
    }

    return 0;
}