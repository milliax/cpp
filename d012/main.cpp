#include <bits/stdc++.h>
#define int long long
using namespace std;

int exp(int x, int y, int p) {
    if (y == 0) return 1;
    if (y & 1) return (exp(x, y - 1, p) * x) % p;
    int t = exp(x, y / 2, p);

    return (t * t) % p;
}

signed main() {
    int x, y, p;
    scanf("%lld %lld %lld", &x, &y, &p);

    printf("%lld\n", exp(x, y, p));

    return 0;
}
