#include <bits/stdc++.h>
#define int long long

using namespace std;

int n;
int m;
int nowMax;
int arr[30];

void rec(int pos, int sum) {
    if (pos > n) {
        return;
    }

    if(sum > nowMax && sum <= m){
        nowMax = sum;
    }

    rec(pos + 1, sum);
    rec(pos + 1, sum + arr[pos]);
    return;
}

signed main() {
    scanf("%lld %lld", &n, &m);
    for (int i = 0; i < n; ++i) {
        scanf("%lld", &arr[i]);
    }
    rec(0, 0);
    printf("%lld\n", nowMax);
    return 0;
}