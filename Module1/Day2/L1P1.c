#include <stdio.h>
#include <stdint.h>

int main() {
    double x = 0.7;
    
    uint64_t* p = (uint64_t*)&x;
    uint16_t exponent = (*p >> 52) & 0x7FF;
    
    
    printf("Exponent (hex): 0x%X\n", exponent);
    
    
    printf("Exponent (binary): ");
    for (int i = 10; i >= 0; i--) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");
    
    return 0;
}
