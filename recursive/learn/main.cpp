#include "bits/stdc++.h"

#define int long long

int eval() {
    int val, x, y, z;
    char token[7];
    scanf("%s", token);
    if (token[0] == 'f') {
        x = eval();
        return 2 * x - 1;
    } else if (token[0] == 'g') {
        x = eval();
        y = eval();
        return x + 2 * y - 3;
    }
    return atoi(token);
}

signed main() {
    printf("%lld\n", eval());
    return 0;
}
