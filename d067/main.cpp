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
        dp[1] = max(arr[0],arr[1]);
        for (int i = 2; i < n; ++i) {
            dp[i] = max(dp[i - 2] + arr[i], dp[i - 1]);
        }
        printf("%lld\n", dp[n - 1]);
    }
    return 0;
}