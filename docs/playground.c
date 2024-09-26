#include <stdio.h>

int main() {
    // เปิดไฟล์ที่มี input
    FILE *inputFile = fopen("/input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input file!\n");
        return 1;
    }

    // อ่านค่าจากไฟล์ input
    int num;
    fscanf(inputFile, "%d", &num);
    fclose(inputFile);

    // คำนวณหรือประมวลผล
    int result = num * 2;  // ตัวอย่าง: คูณ input ด้วย 2

    // เขียนผลลัพธ์ลงในไฟล์ output
    FILE *outputFile = fopen("/output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output file!\n");
        return 1;
    }

    fprintf(outputFile, "The result is: %d\n", result);
    fclose(outputFile);

    return 0;
}
