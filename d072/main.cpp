#include <bits/stdc++.h>
#define int long long

using namespace std;

int dp[100005][2];
int arr[100005][2];
int a, b;

signed main() {
    int n, start;

    while (cin >> n >> start) {
        for (int i = 0; i < n; ++i) {
            scanf("%lld %lld", &arr[i][0], &arr[i][1]);
        }

        dp[0][0] = abs(arr[0][0] - start);
        dp[0][1] = abs(arr[0][1] - start);

        for (int i = 1; i < n; ++i) {
            dp[i][0] = min(dp[i - 1][0] + abs(arr[i][0] - arr[i - 1][0]), dp[i - 1][1] + abs(arr[i][0] - arr[i - 1][1]));
            dp[i][1] = min(dp[i - 1][0] + abs(arr[i][1] - arr[i - 1][0]), dp[i - 1][1] + abs(arr[i][1] - arr[i - 1][1]));
        }
        printf("%lld\n", min(dp[n - 1][0], dp[n - 1][1]));
    }

    return 0;
}