#include <bits/stdc++.h>
#define int long long

using namespace std;

char arr[1000002];
int pos;

int deep(int pixels){
    switch(arr[pos++]){
        case '1':
            return pixels*pixels;
        case '2':
            return deep(pixels/2) + deep(pixels/2) + deep(pixels/2) + deep(pixels/2);
    }
    return 0;
}

signed main(){
    int pixels;
    pos = 0;
    scanf("%s %lld",arr,&pixels);
    printf("%lld\n",deep(pixels));
    return 0;
}