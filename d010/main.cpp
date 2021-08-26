#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    set<int> s;
    int num;
    int temp;
    scanf("%lld", &num);
    for (int i = 0; i < num; ++i) {
        scanf("%lld", &temp);
        s.insert(temp);
    }
    cout << s.size() << endl;
    for (auto it = s.begin(); it != s.end(); it++) {
        printf("%lld ",*it);
    }
    cout << endl;
    return 0;
}