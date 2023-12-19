#include <stdio.h>

int main() {
    int iterations = 1000000; 
    double PI = 4.0;

    for (int i = 1; i <= iterations; i++) {
        double term = 4.0 / (2 * i + 1);
        
        
        if (i % 2 == 0) {
            PI -= term;
        } else {
            PI += term;
        }
    }

    printf("使用 %d 次迭代計算的 π 約為：%.5f\n", iterations, PI);

    return 0;
}
