#include <stdio.h>

int main() {
    double weightInKilograms; // 體重（公斤），使用 double 接受小數點
    double heightInMeters;    // 身高（公尺），使用 double 接受小數點 
    double bmi;               // 身體質量指數 (BMI)，使用 double 儲存

    // 提示使用者輸入
    printf("--- 身體質量指數 (BMI) 計算器 (使用小數) ---\n");
    printf("請輸入您的體重 (公斤，例如 55.5): ");

    // 讀取體重 (公斤)
    if (scanf_s("%lf", &weightInKilograms) != 1 || weightInKilograms <= 0) {
        printf("輸入錯誤。請輸入一個有效的正數體重。\n");
        return 1;
    }

    printf("請輸入您的身高 (公尺，例如 1.61): ");

    // 讀取身高 (公尺)
    if (scanf_s("%lf", &heightInMeters) != 1 || heightInMeters <= 0) {
        printf("輸入錯誤。請輸入一個有效的正數身高。\n");
        return 1;
    }

    // --- BMI 計算 ---
    // 公式: BMI = weightInKilograms / (heightInMeters * heightInMeters)
    // 由於所有變數都是 double，結果將會是精確的浮點數。
    bmi = weightInKilograms / (heightInMeters * heightInMeters);

    // 輸出結果
    printf("\n您的體重: %.2f 公斤, 身高: %.2f 公尺\n", weightInKilograms, heightInMeters);
    printf("您的 BMI 精確結果是: %.2f\n", bmi); // 輸出 BMI 到小數點後兩位

    // 輸出 BMI 評估資訊
    printf("\n--- BMI 值評估標準 ---\n");
    printf(" (體重過輕):              少於 18.5\n");
    printf(" (正常):                  介於 18.5 和 24.9\n");
    printf(" (體重過重):              介於 25 和 29.9\n");
    printf(" (肥胖):                  30 或更大\n");

    return 0;
}