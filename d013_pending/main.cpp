#include <bits/stdc++.h>
#define int long long

using namespace std;

char number[205];

int exp(int x, int y, int p) {
    if (y == 0) return 1;
    if (y & 1) return (exp(x, y - 1, p) * x) % p;
    int t = exp(x, y / 2, p);

    return (t * t) % p;
}

signed main() {
    int y, p;
    scanf("%s%lld%lld", number, &y, &p);
    int base = 0;
    for (int i = 0; i < 200; ++i) {
        base *= 10;
        base += number[i];
        base %= p;
    }
    printf("%lld\n", exp(base, y, p));
}