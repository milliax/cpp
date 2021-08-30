#include <bits/stdc++.h>
#define int long long

using namespace std;

int arr[100005];
int dp[100005];

signed main() {
    int n;
    while (cin >> n) {
        for (int i = 0; i < n; ++i) {
            scanf("%lld", &arr[i]);
        }

        dp[0] = arr[0];
        dp[1] = arr[1];
        dp[2] = arr[2] + min(dp[0],dp[1]);
        for (int i = 3; i < n; ++i) {
            dp[i] = arr[i] + min(min(dp[i - 1], dp[i - 2]), dp[i - 3]);
        }
        printf("%lld\n", min(dp[n - 1], dp[n - 2]));
    }
    return 0;
}