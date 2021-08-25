#include <bits/stdc++.h>
#define int long long

using namespace std;

int chase[20];

int q(int n) {
    int ans = 0;
    for (int i = 0; i < n; ++i) chase[i] = i;
    bool valid = true;
    do {
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (abs(chase[i] - chase[j]) == j-i) {
                    printf("%lld %lld\n",i,j);
                    printf("%lld %lld\n",chase[i],chase[j]);
                    valid = false;
                    break;
                }
            }
            if (!valid) break;
        }
        if (valid) {
            ans++;
        }
    } while (next_permutation(chase, chase + n));
    return ans;
}

signed main() {
    for (int i = 1; i < 15; ++i) {
        printf("%lld : %lld\n", i, q(i));
    }
    return 0;
}