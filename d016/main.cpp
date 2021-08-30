#include <bits/stdc++.h>
#define int long long

using namespace std;
int arr[50005];
map<int, int> c;

signed main() {
    int m, n;
    scanf("%lld%lld", &m, &n);
    int ans = 0;
    int all = (1 << m) - 1;
    for (int i = 0; i < n; ++i) {
        string str;
        cin >> str;

        int t = 0;
        for (int j = 0; j < str.length(); ++j) {
            t |= (1 << str[j] - 'A');
        }

        ans += c[t ^ all];
        c[t]++;
    }

    printf("%lld\n", ans);
    return 0;
}