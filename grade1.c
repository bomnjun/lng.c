#include <stdio.h>

int main(void) {
    int i;
    scanf("%d", &i);

    if (i >= 90) {
        printf("A\n");
    }
    else if (i >= 80) {
        printf("B\n");
    }
    else if (i >= 70) {
        printf("C\n");
    }
    else if (i >= 60) {
        printf("D\n");
    }
    else { printf("F\n"); }

    return 0;

}