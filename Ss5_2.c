#include <stdio.h>
int main() {
    int target = 10;
    int input;
    printf("Hay nhap mot so nguyen!\n");
    while (1) {
        printf("Nhap mot so: ");
        scanf("%d", &input);
        if (input == target) {
            printf("Ban da nhap dung so: %d\n", target);
            break;
        } else {
            printf("Sai roi! Hay thu lai.\n");
        }
    }
    return 0;
}

