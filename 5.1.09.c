// Submission #3461474
#include <stdio.h>

int main()
{
    static const int ans[] = {
        -1,
        9,
        9 + 9,
        9 + 9 + 90,
        9 + 9 + 90 + 90,
        9 + 9 + 90 + 90 + 900,
        9 + 9 + 90 + 90 + 900 + 900,
        9 + 9 + 90 + 90 + 900 + 900 + 9000,
        9 + 9 + 90 + 90 + 900 + 900 + 9000 + 9000,
        9 + 9 + 90 + 90 + 900 + 900 + 9000 + 9000 + 90000,
        9 + 9 + 90 + 90 + 900 + 900 + 9000 + 9000 + 90000 + 90000
    };
    int n;
    scanf("%d", &n);
    printf("%d\n", ans[n]);
    return 0;
}
