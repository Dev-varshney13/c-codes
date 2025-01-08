//ques2 chapter5 solved by dev varshney
#include <stdio.h>

int main() {
    int i = 1, d1, d2, d3;

    while (i <= 500) {
        if (i < 10) {
            if (i == i * i * i) {
                printf("%d\n", i);
            }
        }
        else if (i >= 10 && i < 100) {
            d1 = i / 10;
            d2 = i % 10;
            if (i == (d1 * d1 * d1) + (d2 * d2 * d2)) {
                printf("%d\n", i);
            }
        }
        else if (i >= 100 && i <= 500) {
            d1 = i / 100;
            d2 = (i % 100) / 10;
            d3 = (i % 100) % 10;
            if (i == (d1 * d1 * d1) + (d2 * d2 * d2) + (d3 * d3 * d3)) {
                printf("%d\n", i);
            }
        }

        i++;
    }
return 0;
}
