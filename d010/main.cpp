#include <bits/stdc++.h>
#define int long long

using namespace std;

int arr[100005];
int sorted[100005];

signed main() {
    int n;
    set<int> s;
    scanf("%lld", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%lld", &arr[i]);
        s.insert(arr[i]);
    }
    int index = 0;
    for(auto ptr=s.begin();ptr != s.end();ptr++){
        sorted[index++] = *ptr;
    }

    for (int i = 0; i < n - 1; ++i) {
        printf("%ld ", lower_bound(sorted,sorted+index,arr[i])-sorted);
    }
    printf("%ld\n", lower_bound(sorted,sorted+index,arr[n - 1])-sorted);

    return 0;
}