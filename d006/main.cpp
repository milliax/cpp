#include <bits/stdc++.h>

#define int long long

using namespace std;

int p = 10009;
int ans;
int n;
int arr[27];

void rec(int pos, int reminder) {
    if(pos >= n){
        if(reminder == 1){
            ans++;
        }
        return;
    }

    rec(pos + 1, (reminder * arr[pos]) % p); //choose arr[pos]
    rec(pos + 1, reminder);  // didn't choose this one
    return;
}

signed main() {
    ans = 0;
    scanf("%lld", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%lld", &arr[i]);
    }
    rec(0, 1);
    printf("%lld\n", ans-1);
    return 0;
}