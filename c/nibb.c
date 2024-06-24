#include <stdio.h>

// Function to swap nibbles in a four-digit number
int swapNibbles(int x) {
    // Extract digits
    int thousands = x / 1000;           // Extract the thousand's place
    int hundreds = (x / 100) % 10;      // Extract the hundred's place
    int tens = (x / 10) % 10;           // Extract the ten's place
    int ones = x % 10;                  // Extract the one's place

    // Swap the digits to achieve the desired output
    int swapped = hundreds * 1000 + thousands * 100 + ones * 10 + tens;

    return swapped;
}

int main() {
    int x = 2345; // Example input number
    int result = swapNibbles(x);

    printf("Original number: %d\n", x);
    printf("After swapping nibbles: %d\n", result);

    return 0;
}

