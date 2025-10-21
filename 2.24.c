#include <stdio.h>

int main(void) {
    int number;

    // 矗ボㄏノ块俱计
    printf("叫块俱计: ");
    scanf_s("%d", &number);

    // 耞琌计┪案计
    if (number % 2 == 0) {
        printf("%d 琌案计\n", number);
    }
    else {
        printf("%d 琌计\n", number);
    }

    return 0;
}
