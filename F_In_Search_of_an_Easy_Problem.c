#include <stdio.h>

int main() {
    int n;
    int response;
    int is_hard = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &response);
        if (response == 1) {
            is_hard = 1;
            break;
        }
    }


    if (is_hard==1) {
        printf("HARD\n");
    } else {
        printf("EASY\n");
    }

    return 0;
}
