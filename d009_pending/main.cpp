#include <bits/stdc++.h>
#define int long long

using namespace std;
int arr[15][15];

int rec(int hs, int he, int vs, int ve) {
    // horizon start, end, vertical start,end
    int a, b, c, d;
    int zero = 0;
    int one = 0;
    
    if (hs == he || vs == ve)
        return 0;

    for (int i = vs; i < ve; ++i) {
        if (arr[hs][i])
            one++;
        else
            zero++;
    }
    a = min(one, zero) + rec(hs + 1, he, vs, ve);
    one = 0;
    zero = 0;

    for (int i = vs; i < ve; ++i) {
        if (arr[he][i])
            one++;
        else
            zero++;
    }
    b = min(one, zero) + rec(hs, he - 1, vs, ve);
    one = 0;
    zero = 0;
    for (int i = hs; i < he; ++i) {
        if (arr[i][vs])
            one++;
        else
            zero++;
    }
    c = min(one, zero) + rec(hs, he, vs + 1, ve);
    one = 0;
    zero = 0;
    for (int i = hs; i < he; ++i) {
        if (arr[i][ve])
            one++;
        else
            zero++;
    }
    d = min(one, zero) + rec(hs, he, vs, ve - 1);
    return min(min(a, b), min(c, d));
}

signed main() {
    int a, b;

    scanf("%lld %lld", &a, &b);

    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            scanf("%lld", &arr[i][j]);
        }
    }
    // horizon start, end, vertical start,end
    printf("%lld", rec(0, b, 0, a));
}