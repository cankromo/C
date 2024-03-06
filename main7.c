#include <stdio.h>

enum level {
    low,
    medium,
    high
};

int main() {
    enum level seviye;
    printf("Enter the level (0 for low, 1 for medium, 2 for high): ");
    scanf("%d", (int*)&seviye);
    printf("%d\n", seviye);
    return 0;
}