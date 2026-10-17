#include <stdio.h>

int main() {
    int x = -1;
    while (1) {  // حلقة لا نهائية تتطبع للأبد
        printf("x = %d\n", x);
        x--;  // -1, -2, -3, -4 ... إلى ما لا نهاية
    }
    return 0;
}
