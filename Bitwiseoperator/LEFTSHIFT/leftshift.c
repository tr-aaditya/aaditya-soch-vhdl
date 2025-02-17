#include <stdio.h>

void decimalToBinary(int n) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
}

int main() {
    int a, shift;

    
    printf("Enter the decimal number: ");
    scanf("%d", &a);
    printf("Enter the number of bits to shift left: ");
    scanf("%d", &shift);

    
    int result = a << shift;

    
    printf("\nNumber in binary: ");
    decimalToBinary(a);
    printf("\nLeft Shift by %d result: ", shift);
    decimalToBinary(result);
    printf("\nDecimal result: %d\n", result);

    return 0;
}
