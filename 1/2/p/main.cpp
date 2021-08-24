#include "bits/stdc++.h"

#define int long long
using namespace std;
int a, n;

int branch[50005];

int chop(int head, int end) {
    if (end - head <= 1) {
        return 0;
    }
    int target = (branch[head] + branch[end]) / 2;
    int len = end - head;
    int location = lower_bound(branch+head, branch + end, target) - branch;
    if (branch[location-1] - branch[head] >= branch[end] - branch[location]) {
        location--;
    }
    return branch[end] - branch[head] + chop(head,location) + chop(location,end);
}

signed main() {
    cin >> a >> n;
    branch[0] = 0;
    branch[a + 1] = n;
    for (int i = 1; i <= a; ++i) {
        cin >> branch[i];
    }
    printf("%lld\n", chop(0, a + 1));
    return 0;
}