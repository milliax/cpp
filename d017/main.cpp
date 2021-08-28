#include <bits/stdc++.h>
#define int long long

using namespace std;
int n, p;
int c;

int exp(int base, int times) {
    if (times == 0)
        return 1;
    if (times & 1)
        return (exp(base, times - 1) * base) % p;
    int t = exp(base, times / 2);
    return (t * t) % p;
}

signed main() {
    scanf("%lld%lld", &n, &p);
    for (int i = 1; i < n; ++i) {
        scanf("%lld", &c);
        printf("%lld ", exp(c,p-2));
    }
    scanf("%lld", &c);
    printf("%lld\n", exp(c,p-2));
    return 0;
}