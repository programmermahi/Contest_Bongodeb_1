#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N < 0) {
       return 1; 
    }
    for (int i = N; i >= 0; i--) {
        printf("%d\n", i);
    }
    return 0; 
}
