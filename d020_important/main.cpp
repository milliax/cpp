#include <bits/stdc++.h>
#define int long long

using namespace std;

int arr[100005];
int sum[100005];

set<int> s;

signed main() {
    int n, k;
    scanf("%lld %lld", &n, &k);

    s.insert(0);
    int best = 0;
    int v;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%lld", &v);
        sum += v;
        auto it = s.lower_bound(sum - k);
        
        if (it != s.end()) {
            best = max(best, sum - *it);
        }
        s.insert(sum);
    }
    printf("%lld\n", best);

    return 0;
}