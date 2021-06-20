

#include <cstdio>
 
int n, k;
char str[500006];
 
int main() {
    scanf("%d%d%s", &n, &k, str);
    int x = 0, curr = 0;
    for (int i = 1; i < n; i++) {
        if (str[curr] < str[i]) break;
        if (str[curr] > str[i]) curr = 0, x = i;
        else curr++;
    }
    x++;
    for (int i = 0; i < k; i++) printf("%c", str[i % x]);
}