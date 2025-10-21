#include <stdio.h>

int main() {
    printf("--- 方法一：使用五個 printf 語句 ---\n");

    // 第一層
    printf("    *\n");

    // 第二層
    printf("   ***\n");

    // 第三層
    printf("  *****\n");

    // 第四層
    printf(" *******\n");

    // 第五層
    printf("*********\n");

    printf("\n--- 方法二：僅使用一個 printf 語句 ---\n");

    printf("    *\n"
           "   ***\n"
           "  *****\n"
           " *******\n"
           "*********\n");

    return 0;
}