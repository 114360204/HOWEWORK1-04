#include <stdio.h>

int main(void) {
    int num1, num2;

    // 提示使用者輸入兩個整數
    printf("請輸入兩個整數，以空白分隔: ");
    scanf_s("%d %d", &num1, &num2);

    // 檢查除數是否為 0
    if (num2 == 0) {
        printf("錯誤：第二個數不能為 0。\n");
    }
    else {
        // 使用取餘數運算子判斷倍數關係
        if (num1 % num2 == 0) {
            printf("%d 是 %d 的倍數。\n", num1, num2);
        }
        else {
            printf("%d 不是 %d 的倍數。\n", num1, num2);
        }
    }

    return 0;
}
