#include "bits/stdc++.h"

#define int long long

int eval() {
    int val, x, y, z;
    char token[7];
    scanf("%s", token);
    if (token[0] == 'f') {
        x = eval();
        return 2 * x - 3;
    } else if (token[0] == 'g') {
        x = eval();
        y = eval();
        return 2 * x + y - 7;
    } else if (token[0] == 'h') {
        x = eval();
        y = eval();
        z = eval();
        return 3 * x - 2 * y + z;
    }
    return atoi(token);
}

signed main() {
    printf("%lld\n", eval());
    return 0;
}
