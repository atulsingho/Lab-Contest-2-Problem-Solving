#include <stdio.h>
#include <string.h>

int main() {
    char s[105];
    scanf("%s", s);

    if (strstr(s, "1111111") != NULL || strstr(s, "0000000") != NULL) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
