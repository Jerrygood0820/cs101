#include <stdio.h>

int main() {
    double targetPI = 3.14159;
    double PI = 0.0;
    int iterations = 0;

    for (int i = 0; ; i++) {
        double term = 4.0 / (2 * i + 1);

       
        if (i % 2 == 0) {
            PI += term;
        } else {
            PI -= term;
        }

        iterations++;

       
        if (PI >= targetPI - 0.000005 && PI <= targetPI + 0.000005) {
            break;
        }
    }

    printf("找到最小的迭代次數：%d\n", iterations);
    printf("使用 %d 次迭代計算的 π 約為：%.5f\n", iterations, PI);

    return 0;
}
