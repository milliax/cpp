#include "bits/stdc++.h"

int cal() {
    int a, b, c;
    char input[7];
    scanf("%s", input);
    if (input[0] == 'f') {
        a = cal();
        return a * 2 - 3;
    }
    if (input[0] == 'g') {
        a = cal();
        b = cal();
        return 2 * a + b - 7;
    }
    if (input[0] == 'h') {
        a = cal();
        b = cal();
        c = cal();
        return 3 * a - 2 * b + c;
    }
    return atoi(input);
}

int main() {
    printf("%d", cal());
    return 0;
}