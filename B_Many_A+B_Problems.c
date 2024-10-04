
#include <stdio.h>
int main() {
    int i,test, a,b;
    scanf("%d", &test);

    for (i = 0; i < test; i++) {

        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }

    return 0;
}
