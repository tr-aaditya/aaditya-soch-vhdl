#include <stdio.h>

void decimalToBinary(int n) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
}

int main() {
    int a;

    
    printf("Enter the decimal number: ");
    scanf("%d", &a);

    
    int result = ~a;

   
    printf("\nNumber in binary: ");
    decimalToBinary(a);
    printf("\nBitwise NOT result: ");
    decimalToBinary(result);
    printf("\nDecimal result: %d\n", result);

    return 0;
}
