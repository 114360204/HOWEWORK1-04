#include <stdio.h>

int main(void) {
    int i;  // 迴圈變數

    // 印出表頭
    printf("數字\t平方\t立方\n\n");
    

    // 使用 for 迴圈從 0 跑到 10
    for (i = 0; i <= 10; i++) {
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    }

    return 0;
}
