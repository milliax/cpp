// https://yuihuang.com/zj-f638/
// even though i read it i still get confused.
#include <bits/stdc++.h>
#define int long long

using namespace std;

int minDepth;
int p[50005];
int lps[50005],rps[50005];

int chop(int l, int r, int depth) {
    if (depth > minDepth) return 0;
    if (r - l < 2) return 0;
        


    return max + chop(l, toChop - 1, depth + 1) +
           chop(toChop + 1, r, depth + 1);
}

signed main() {
    int n;
    cin >> n >> minDepth;
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    printf("%lld", chop(0, n - 1, 1));
    return 0;
}