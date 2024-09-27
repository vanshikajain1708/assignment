#include <stdio.h>
void decimalToBinary(int decimal_num) {
    int binary[32];
    int i = 0;
    if (decimal_num == 0) {
        printf("0");
        return;
    }

    while (decimal_num > 0) {
        binary[i] = decimal_num % 2;
        decimal_num = decimal_num / 2;
        i++;
    }

        for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
}
int main() {
    int decimal_num;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal_num);
    printf("Binary: ");
    decimalToBinary(decimal_num);
    printf("\n");
    printf("Hexadecimal: %X\n", decimal_num);
    printf("Octal: %o\n", decimal_num);

    return 0;
}    
