#include <stdio.h>

int main() {
    int n;
    printf("");
    scanf("%d", &n); // รับจำนวนระดับของพีระมิด

    for (int i = 1; i <= n; i++) {
        // แสดงช่องว่าง
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // แสดงดาว
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        // บรรทัดใหม่
        printf("\n");
    }

    return 0;
}