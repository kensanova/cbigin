#include <stdio.h>
int main() {
    printf("%f", 3.123456);  //6-digit precision after the decimal point
    printf("\n%.1f", 3.123456);
    printf("\n%.2f", 3.123456);
    printf("\n%.3f", 3.123456);
    printf("\n%.4f", 3.123456);
    printf("\n%.5f", 3.123456);
    printf("\n%.6f", 3.123456);
    
    return 0;
}