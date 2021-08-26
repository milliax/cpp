#include <bits/stdc++.h>
#define int long long

using namespace std;

int arr[100005];
int best[100005];

signed main() {
    int n;
    while (cin >> n) {
        fill(best, best + 100005, 0);
        for (int i = 0; i < n; ++i) {
            scanf("%lld", &arr[i]);
        }
        best[0] = arr[0];
        best[1] = arr[1];
        for (int i = 2; i < n; ++i) {
            best[i] = min(best[i - 1], best[i - 2]) + arr[i];
        }
        printf("%lld\n", best[n - 1]);
    }
    return 0;
}
