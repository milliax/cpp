#include <bits/stdc++.h>
#define int long long

using namespace std;

char str[155];
vector<int> ve;

signed main() {
    while (scanf("%s", str) != EOF) {
        ve.clear();
        bool isPass = true;
        for (int i = 0; str[i] != '\0'; ++i) {
            switch (str[i]) {
                case '[':
                case '{':
                case '(':
                    ve.push_back(str[i]);
                    break;
                case '}':
                    if (ve.size() == 0) {
                        isPass = false;
                        break;
                    }
                    if (ve.back() == '{') {
                        ve.pop_back();
                    } else {
                        isPass = false;
                    }
                    break;
                case ']':
                    if (ve.size() == 0) {
                        isPass = false;
                        break;
                    }
                    if (ve.back() == '[') {
                        ve.pop_back();
                    } else {
                        isPass = false;
                    }
                    break;
                case ')':
                    if (ve.size() == 0) {
                        isPass = false;
                        break;
                    }
                    if (ve.back() == '(') {
                        ve.pop_back();
                    } else {
                        isPass = false;
                    }

                    break;
            }
            if (!isPass)
                break;
        }
        if (ve.size() != 0)
            isPass = false;

        if (isPass) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }
    return 0;
}