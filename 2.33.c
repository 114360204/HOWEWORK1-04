#include <stdio.h>

int main() {
    // 宣告變數為 double，以處理小數和貨幣值
    double totalMiles;       // a) 一整天的總里程數
    double costPerUnit;      // b) 汽油一公升/加侖的價格
    double avgMileage;       // c) 平均一公升/加侖能行駛的里程數
    double parkingFees;      // d) 一天的停車費
    double tollsPerDay;      // e) 一天的過路費

    double fuelConsumed;     // 每天需要的油量
    double dailyFuelCost;    // 每天的油費
    double totalDailyCost;   // 每天的總花費

    printf("--- 共乘節省計算器：每日駕駛成本計算 ---\n");

    // 1. 讀取所有輸入
    printf("a) 請輸入一整天的總里程數 (請輸入公里): ");
    scanf_s("%lf", &totalMiles);

    printf("b) 請輸入每公升/加侖汽油的價格(*美制加侖=3.9公升、英制加侖=4.5公升): ");
    scanf_s("%lf", &costPerUnit);

    printf("c) 請輸入平均每公升/加侖能行駛的里程數: ");
    scanf_s("%lf", &avgMileage);

    printf("d) 請輸入一天的停車費: ");
    scanf_s("%lf", &parkingFees);

    printf("e) 請輸入一天的過路費: ");
    scanf_s("%lf", &tollsPerDay);

    // --- 2. 核心計算 ---

    // 檢查油耗是否為零，避免除以零錯誤
    if (avgMileage <= 0) {
        printf("\n錯誤：平均里程數必須大於零。\n");
        return 1;
    }

    // 步驟 1: 計算每天需要的油量 (公升)
    fuelConsumed = totalMiles / avgMileage;

    // 步驟 2: 計算每天的油費
    dailyFuelCost = fuelConsumed * costPerUnit;

    // 步驟 3: 計算每日總花費
    totalDailyCost = dailyFuelCost + parkingFees + tollsPerDay;

    // --- 3. 輸出結果 ---
    printf("\n--- 每日駕駛成本明細 ---\n");
    printf("總油量消耗:           %.2f 單位 (公升)\n", fuelConsumed);
    printf("每日油費:             $%.2f\n", dailyFuelCost);
    printf("每日固定費用 (停車費+過路費): $%.2f\n", parkingFees + tollsPerDay);
    printf("----------------------------------\n");
    printf("您每天開車去工作的總花費是:  $%.2f\n", totalDailyCost);
    printf("----------------------------------\n");
    printf("透過共乘，您可以估計節省這筆花費，並同時減少碳排放和交通阻塞。\n");

    return 0;
}